#include <lvgl.h>
#include <TimeLib.h>
#include <WiFiUdp.h>
#include <WiFiManager.h>
#include <TFT_eSPI.h>
#include <string>
#include <ESP8266WiFi.h>

#include "NetData.h"

using namespace std;

// 以下为配置项
// wifi配置,如不进行配置,默认进入配网模式
char *ssid = "";         // 连接WiFi名（此处使用taichi-maker为示例）
                                    // 请将您需要连接的WiFi名填入引号中
char *password = ""; // 连接WiFi密码（此处使用12345678为示例）

//wifi连接超时时间
unsigned int connectTimeout = 10;  //默认10s，超出这个时间自动进入配网模式

//路由器netdata配置
char *netdataHost = "192.168.1.1";
unsigned int netdataPort = 19999;

//亮度配置
unsigned int bright = 220;

//定时亮度配置
bool autoLight = true; //true:开启定时亮度 false:关闭定时亮度
unsigned int nightLight = 256; //[0, 256] 越小越亮,越大越暗
unsigned int nightHour = 23;
unsigned int nightMin = 00;
unsigned int nightSec = 0;
unsigned int dayLight = bright;  //[0, 256] 越小越亮,越大越暗
unsigned int dayHour = 07;
unsigned int dayMin = 00;
unsigned int daySec = 0;

//统计参数配置
char* cpuPara = "system.cpu";  //cpu参数
char* memPara = "mem.available";  //内存参数
char* netPara = "net.eth0";  //网络端口参数
char* tempPara = "sensors.acpitz-acpi-0_temperature";  //温度参数

// extern lv_font_t my_font_name;
LV_FONT_DECLARE(tencent_w7_22)
LV_FONT_DECLARE(tencent_w7_24)

TFT_eSPI tft = TFT_eSPI(); /* TFT instance */
static lv_disp_buf_t disp_buf;
static lv_color_t buf[LV_HOR_RES_MAX * 10];

// 定义页面
static lv_obj_t *login_page = NULL;
static lv_obj_t *monitor_page = NULL;

// basic variables
static uint8_t test_data = 0;
// static lv_obj_t* label1;
static lv_obj_t *upload_label;
static lv_obj_t *down_label;
static lv_obj_t *up_speed_label;
static lv_obj_t *up_speed_unit_label;
static lv_obj_t *down_speed_label;
static lv_obj_t *down_speed_unit_label;
static lv_obj_t *cpu_bar;
static lv_obj_t *cpu_value_label;
static lv_obj_t *mem_bar;
static lv_obj_t *mem_value_label;
static lv_obj_t *temp_value_label;
static lv_obj_t *temperature_arc;
static lv_obj_t *ip_label;
static lv_style_t arc_indic_style;
static lv_obj_t *chart;

static lv_chart_series_t *ser1;
static lv_chart_series_t *ser2;

NetChartData netChartData;

lv_coord_t up_speed_max = 0;
lv_coord_t down_speed_max = 0;
// 监测数值
double up_speed;
double down_speed;
double cpu_usage;
double mem_usage;
double temp_value;
lv_coord_t upload_serise[10] = {0};
lv_coord_t download_serise[10] = {0};

// LCD屏幕相关设置
TFT_eSprite clk = TFT_eSprite(&tft);
//wifi配置
WiFiManager wm; // global wm instance
void Webwin();
void Webconfig();
// NTP服务
WiFiUDP Udp;
unsigned int localPort = 8000;
static const char ntpServerName[] = "ntp6.aliyun.com";
const int timeZone = 8; //东八区
void sendNTPpacket(IPAddress &address); //向NTP服务器发送请求
time_t getNtpTime();                    //从NTP获取时间


#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(lv_log_level_t level, const char *file, uint32_t line, const char *dsc, const char *params)
{

    Serial.printf("%s@%d->%s [%s]\r\n", file, line, dsc, params);
    Serial.flush();
}
#endif

// 屏幕亮度设置，value [0, 256] 越小越亮,越大越暗
void setBrightness(int value) {
    pinMode(TFT_BL, INPUT);
    analogWrite(TFT_BL, value);
    pinMode(TFT_BL, OUTPUT);
}

// 页面初始化
void setupPages()
{
    setBrightness(bright);
    login_page = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_size(login_page, 240, 240); // 设置容器大小
    lv_obj_set_style_local_bg_color(login_page, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_obj_set_style_local_border_color(login_page, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_obj_set_style_local_radius(login_page, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 0);

    monitor_page = lv_cont_create(lv_scr_act(), NULL);
    lv_obj_set_size(monitor_page, 240, 240);

    lv_obj_set_hidden(login_page, false);
    lv_obj_set_hidden(monitor_page, true);
}

// 设置login_page显示组件
void initLoginPage()
{
    lv_style_t login_spinner_style;
    lv_style_init(&login_spinner_style);
    lv_style_set_line_width(&login_spinner_style, LV_STATE_DEFAULT, 5);
    lv_style_set_pad_left(&login_spinner_style, LV_STATE_DEFAULT, 5);
    lv_style_set_line_color(&login_spinner_style, LV_STATE_DEFAULT, lv_color_hex(0xff5d18));

    lv_obj_t *preload = lv_spinner_create(login_page, NULL);
    lv_obj_set_size(preload, 100, 100);
    lv_obj_align(preload, NULL, LV_ALIGN_CENTER, 0, 0);
}

// 连接WiFi
void connectWiFi()
{
    WiFi.begin(ssid, password);     // 启动网络连接
    Serial.print("Connecting to "); // 串口监视器输出网络连接信息
    Serial.print(ssid);
    Serial.println(" ..."); // 告知用户NodeMCU正在尝试WiFi连接

    int i = 0; // 这一段程序语句用于检查WiFi是否连接成功
    while (WiFi.status() != WL_CONNECTED)
    {                // WiFi.status()函数的返回值是由NodeMCU的WiFi连接状态所决定的。
        delay(1000); // 如果WiFi连接成功则返回值为WL_CONNECTED
        Serial.print(i++);
        Serial.print(' '); // 此处通过While循环让NodeMCU每隔一秒钟检查一次WiFi.status()函数返回值
                           // 同时NodeMCU将通过串口监视器输出连接时长读秒。
                           // 这个读秒是通过变量i每隔一秒自加1来实现的。
        if (i >= connectTimeout)
        {
            lv_obj_set_hidden(login_page, true);
            Webwin();
            Webconfig();
        }
    }
    if (WiFi.status() == WL_CONNECTED)
    {
        Serial.print("SSID:");
        Serial.println(WiFi.SSID().c_str());
        Serial.print("PSW:");
        Serial.println(WiFi.psk().c_str());
        strcpy(ssid, WiFi.SSID().c_str()); //名称复制
        strcpy(password, WiFi.psk().c_str());   //密码复制
    }
    // wifi验证成功，切换到monitor页面
    lv_obj_set_hidden(login_page, true);
    lv_obj_set_hidden(monitor_page, false);

    Serial.print("local IP： ");
    Serial.println(WiFi.localIP());
    Serial.println("start UDP");
    Udp.begin(localPort);
    Serial.println("wait sync...");
    setSyncProvider(getNtpTime);
    setSyncInterval(300);

    getNtpTime();

    Serial.println("");                                // WiFi连接成功后
    Serial.println("Connection established!");         // NodeMCU将通过串口监视器输出"连接成功"信息。
    Serial.print("IP address:    ");                   // 同时还将输出NodeMCU的IP地址。这一功能是通过调用
    Serial.println(WiFi.localIP().toString().c_str()); // WiFi.localIP()函数来实现的。该函数的返回值即NodeMCU的IP地址。
}

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors(&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

/* Reading input device (simulated encoder here) */
bool read_encoder(lv_indev_drv_t *indev, lv_indev_data_t *data)
{
    static int32_t last_diff = 0;
    int32_t diff = 0;                   /* Dummy - no movement */
    int btn_state = LV_INDEV_STATE_REL; /* Dummy - no press */

    data->enc_diff = diff - last_diff;
    data->state = btn_state;

    last_diff = diff;

    return false;
}

void getCPUUsage()
{
    if (getNetDataInfo(cpuPara, netChartData, netdataHost, netdataPort))
    {
        Serial.print("CPU Usage: ");
        Serial.println(String(netChartData.max).c_str());

        cpu_usage = netChartData.max;
    }
}

void getMemoryUsage()
{
    if (getNetDataInfo(memPara, netChartData, netdataHost, netdataPort))
    {
        Serial.print("Memory Available: ");
        Serial.println(String(netChartData.max).c_str());

        mem_usage = 100 * (1.0 - netChartData.max / 1024.0);
    }
}

lv_coord_t updateNetSeries(lv_coord_t *series, double speed)
{
    lv_coord_t local_max = series[0];
    for (int index = 0; index < 9; index++)
    {
        series[index] = series[index + 1];
        if (local_max < series[index])
        {
            local_max = series[index];
        }
    }
    series[9] = (lv_coord_t)speed;
    if (local_max < series[9])
        local_max = series[9];

    Serial.print(speed);
    Serial.print("->");
    Serial.print(series[9]);
    Serial.print("    |");
    for (int i = 0; i < 10; i++)
    {
        Serial.print(series[i]);
        Serial.print(" ");
    }
    Serial.println();

    return local_max;
}

void getNetworkReceived()
{
    if (getNetDataInfoWithDimension(netPara, netChartData, "received", netdataHost, netdataPort))
    {
        Serial.print("Received: ");
        Serial.println(String(netChartData.max).c_str());

        down_speed = netChartData.max / 8.0; // byte = 8 bit
        down_speed_max = updateNetSeries(download_serise, down_speed);
        lv_chart_set_points(chart, ser2, download_serise);
    }
}

void getNetworkSent()
{
    if (getNetDataInfoWithDimension(netPara, netChartData, "sent", netdataHost, netdataPort))
    {
        Serial.print("Sent: ");
        Serial.println(String(netChartData.max).c_str());

        up_speed = -1 * netChartData.max / 8.0;
        up_speed_max = updateNetSeries(upload_serise, up_speed);
        lv_chart_set_points(chart, ser1, upload_serise);
    }
}

void getTemperature()
{
    if (getNetDataInfo(tempPara, netChartData, netdataHost, netdataPort))
    {
        Serial.print("Temperature: ");
        Serial.println(String(netChartData.max).c_str());

        temp_value = netChartData.max;
    }
}

void updateNetworkInfoLabel()
{
    if (up_speed < 100.0)
    {
        // < 99.99 K/S
        lv_label_set_text_fmt(up_speed_label, "%.2f", up_speed);
        lv_label_set_text(up_speed_unit_label, "K/s");
    }
    else if (up_speed < 1000.0)
    {
        // 999.9 K/S
        lv_label_set_text_fmt(up_speed_label, "%.1f", up_speed);
        lv_label_set_text(up_speed_unit_label, "K/s");
    }
    else if (up_speed < 100000.0)
    {
        // 99.99 M/S
        up_speed /= 1024.0;
        lv_label_set_text_fmt(up_speed_label, "%.2f", up_speed);
        lv_label_set_text(up_speed_unit_label, "M/s");
    }
    else if (up_speed < 1000000.0)
    {
        // 999.9 M/S
        up_speed = up_speed / 1024.0;
        lv_label_set_text_fmt(up_speed_label, "%.1f", up_speed);
        lv_label_set_text(up_speed_unit_label, "M/s");
    }

    if (down_speed < 100.0)
    {
        // < 99.99 K/S
        lv_label_set_text_fmt(down_speed_label, "%.2f", down_speed);
        lv_label_set_text(down_speed_unit_label, "K/s");
    }
    else if (down_speed < 1000.0)
    {
        // 999.9 K/S
        lv_label_set_text_fmt(down_speed_label, "%.1f", down_speed);
        lv_label_set_text(down_speed_unit_label, "K/s");
    }
    else if (down_speed < 100000.0)
    {
        // 99.99 M/S
        down_speed /= 1024.0;
        lv_label_set_text_fmt(down_speed_label, "%.2f", down_speed);
        lv_label_set_text(down_speed_unit_label, "M/s");
    }
    else if (down_speed < 1000000.0)
    {
        // 999.9 M/S
        down_speed = down_speed / 1024.0;
        lv_label_set_text_fmt(down_speed_label, "%.1f", down_speed);
        lv_label_set_text(down_speed_unit_label, "M/s");
    }
}

void updateChartRange()
{
    lv_coord_t max_speed = max(down_speed_max, up_speed_max);
    max_speed = max(max_speed, (lv_coord_t)16);
    lv_chart_set_range(chart, 0, (lv_coord_t)(max_speed * 1.1));
}

// task循环执行的函数
static void task_cb(lv_task_t *task)
{
    if (WiFi.status() != WL_CONNECTED)
    {
        connectWiFi();
        lv_label_set_text(ip_label, WiFi.localIP().toString().c_str());
    }
    getCPUUsage();
    getMemoryUsage();
    getTemperature();
    getNetworkReceived();
    getNetworkSent();
    updateChartRange();
    lv_chart_refresh(chart);

    updateNetworkInfoLabel();

    lv_bar_set_value(cpu_bar, cpu_usage, LV_ANIM_OFF);
    lv_label_set_text_fmt(cpu_value_label, "%2.1f%%", cpu_usage);

    lv_bar_set_value(mem_bar, mem_usage, LV_ANIM_OFF);
    lv_label_set_text_fmt(mem_value_label, "%2.0f%%", mem_usage);

    lv_label_set_text_fmt(temp_value_label, "%2.0f°C", temp_value);
    uint16_t end_value = 120 + 300 * temp_value / 100.0f;
    lv_color_t arc_color = temp_value > 75 ? lv_color_hex(0xff5d18) : lv_color_hex(0x50ff7d);
    lv_style_set_line_color(&arc_indic_style, LV_STATE_DEFAULT, arc_color);
    lv_obj_add_style(temperature_arc, LV_ARC_PART_INDIC, &arc_indic_style);
    lv_arc_set_end_angle(temperature_arc, end_value);

    // 测试内存泄漏
    Serial.print("⚠ Left Memory:");
    Serial.println(ESP.getFreeHeap());
}

void setup()
{
    Serial.begin(921600); /* prepare for possible serial debug */
    srand((unsigned)time(NULL));

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

    tft.begin();        /* TFT init */
    tft.setRotation(0); /* Landscape orientation */

    lv_disp_buf_init(&disp_buf, buf, NULL, LV_HOR_RES_MAX * 10);

    /*Initialize the display*/
    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = 240;
    disp_drv.ver_res = 240;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.buffer = &disp_buf;
    lv_disp_drv_register(&disp_drv);

    /*Initialize the (dummy) input device driver*/
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_ENCODER;
    indev_drv.read_cb = read_encoder;
    lv_indev_drv_register(&indev_drv);

    setupPages();
    initLoginPage();

    lv_obj_t *bg;
    bg = lv_obj_create(monitor_page, NULL);
    lv_obj_clean_style_list(bg, LV_OBJ_PART_MAIN);
    lv_obj_set_style_local_bg_opa(bg, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_100);
    lv_color_t bg_color = lv_color_hex(0x7381a2);
    // bg_color = lv_color_hex(0xecdd5c);
    lv_obj_set_style_local_bg_color(bg, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, bg_color);
    lv_obj_set_size(bg, LV_HOR_RES_MAX, LV_VER_RES_MAX);

    // 显示ip地址
    ip_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(ip_label, WiFi.localIP().toString().c_str());
    // lv_label_set_text(ip_label, "192.168.100.199");
    lv_obj_set_pos(ip_label, 10, 220);

    lv_obj_t *cont = lv_cont_create(monitor_page, NULL);
    lv_obj_set_auto_realign(cont, true); /*Auto realign when the size changes*/
    // lv_obj_align_origo(cont, NULL, LV_ALIGN_IN_TOP_LEFT, 120, 35);  /*This parametrs will be sued when realigned*/
    // lv_color_t cont_color = lv_color_hex(0x1a1d25);
    lv_color_t cont_color = lv_color_hex(0x081418);
    lv_obj_set_width(cont, 230);
    lv_obj_set_height(cont, 120);
    lv_obj_set_pos(cont, 5, 5);

    lv_cont_set_fit(cont, LV_FIT_TIGHT);
    lv_cont_set_layout(cont, LV_LAYOUT_COLUMN_MID);
    lv_obj_set_style_local_border_color(cont, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, cont_color);
    lv_obj_set_style_local_bg_color(cont, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, cont_color);

    // Upload & Download Symbol
    static lv_style_t iconfont;
    lv_style_init(&iconfont);
    lv_style_set_text_font(&iconfont, LV_STATE_DEFAULT, &iconfont_symbol);

    upload_label = lv_label_create(monitor_page, NULL);
    lv_obj_add_style(upload_label, LV_LABEL_PART_MAIN, &iconfont);
    lv_label_set_text(upload_label, CUSTOM_SYMBOL_UPLOAD);
    lv_color_t speed_label_color = lv_color_hex(0x838a99);
    lv_obj_set_style_local_text_color(upload_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_obj_set_pos(upload_label, 10, 18);

    lv_obj_t *down_label = lv_label_create(monitor_page, NULL);
    lv_obj_add_style(down_label, LV_LABEL_PART_MAIN, &iconfont);
    lv_label_set_text(down_label, CUSTOM_SYMBOL_DOWNLOAD);
    speed_label_color = lv_color_hex(0x838a99);
    lv_obj_set_style_local_text_color(down_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_GREEN);
    lv_obj_set_pos(down_label, 120, 18);

    // Upload & Download Speed Display
    static lv_style_t font_22;
    lv_style_init(&font_22);
    // lv_style_set_text_font(&font_22, LV_STATE_DEFAULT, &lv_font_montserrat_24);
    lv_style_set_text_font(&font_22, LV_STATE_DEFAULT, &tencent_w7_22);

    up_speed_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(up_speed_label, "56.78");
    lv_obj_add_style(up_speed_label, LV_LABEL_PART_MAIN, &font_22);
    lv_obj_set_style_local_text_color(up_speed_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(up_speed_label, 30, 15);

    up_speed_unit_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(up_speed_unit_label, "K/S");
    lv_obj_set_style_local_text_color(up_speed_unit_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, speed_label_color);
    lv_obj_set_pos(up_speed_unit_label, 90, 18);

    down_speed_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(down_speed_label, "12.34");
    lv_obj_add_style(down_speed_label, LV_LABEL_PART_MAIN, &font_22);
    lv_obj_set_style_local_text_color(down_speed_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(down_speed_label, 142, 15);

    down_speed_unit_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(down_speed_unit_label, "M/S");
    lv_obj_set_style_local_text_color(down_speed_unit_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, speed_label_color);
    lv_obj_set_pos(down_speed_unit_label, 202, 18);

    // 绘制曲线图
    /*Create a chart*/
    chart = lv_chart_create(monitor_page, NULL);
    lv_obj_set_size(chart, 220, 70);
    lv_obj_align(chart, NULL, LV_ALIGN_CENTER, 0, -40);
    lv_chart_set_type(chart, LV_CHART_TYPE_LINE); /*Show lines and points too*/
    lv_chart_set_range(chart, 0, 4096);
    lv_chart_set_point_count(chart, 10); // 设置显示点数
    lv_chart_set_update_mode(chart, LV_CHART_UPDATE_MODE_SHIFT);

    /*Add a faded are effect*/
    lv_obj_set_style_local_bg_opa(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_OPA_50); /*Max. opa.*/
    lv_obj_set_style_local_bg_grad_dir(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
    lv_obj_set_style_local_bg_main_stop(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 255); /*Max opa on the top*/
    lv_obj_set_style_local_bg_grad_stop(chart, LV_CHART_PART_SERIES, LV_STATE_DEFAULT, 0);   /*Transparent on the bottom*/

    /*Add two data series*/
    ser1 = lv_chart_add_series(chart, LV_COLOR_RED);
    ser2 = lv_chart_add_series(chart, LV_COLOR_GREEN);

    // /*Directly set points on 'ser2'*/
    lv_chart_set_points(chart, ser2, download_serise);
    lv_chart_set_points(chart, ser1, upload_serise);

    lv_chart_refresh(chart); /*Required after direct set*/

    // 绘制进度条  CPU 占用
    lv_obj_t *cpu_title = lv_label_create(monitor_page, NULL);
    lv_label_set_text(cpu_title, "CPU");
    lv_obj_set_style_local_text_color(cpu_title, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(cpu_title, 5, 140);

    cpu_value_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(cpu_value_label, "34%");
    lv_obj_add_style(cpu_value_label, LV_LABEL_PART_MAIN, &font_22);
    lv_obj_set_style_local_text_color(cpu_value_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(cpu_value_label, 85, 135);

    lv_color_t cpu_bar_indic_color = lv_color_hex(0x63d0fc);
    lv_color_t cpu_bar_bg_color = lv_color_hex(0x1e3644);
    cpu_bar = lv_bar_create(monitor_page, NULL);
    lv_obj_set_size(cpu_bar, 130, 10);
    lv_obj_set_pos(cpu_bar, 5, 160);

    lv_obj_set_style_local_bg_color(cpu_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, cpu_bar_bg_color);
    lv_obj_set_style_local_bg_color(cpu_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, cpu_bar_indic_color);
    lv_obj_set_style_local_border_width(cpu_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 2);
    lv_obj_set_style_local_border_width(cpu_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 2);

    lv_obj_set_style_local_border_color(cpu_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, cont_color);
    lv_obj_set_style_local_border_color(cpu_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, cont_color);
    lv_obj_set_style_local_border_side(cpu_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM);
    lv_obj_set_style_local_radius(cpu_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 2);
    lv_obj_set_style_local_radius(cpu_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 0);

    // 绘制内存占用
    lv_obj_t *men_title = lv_label_create(monitor_page, NULL);
    lv_label_set_text(men_title, "Memory");
    lv_obj_set_style_local_text_color(men_title, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(men_title, 5, 180);

    mem_value_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(mem_value_label, "42%");
    lv_obj_add_style(mem_value_label, LV_LABEL_PART_MAIN, &font_22);
    lv_obj_set_style_local_text_color(mem_value_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(mem_value_label, 85, 175);

    mem_bar = lv_bar_create(monitor_page, NULL);
    lv_obj_set_size(mem_bar, 130, 10);
    lv_obj_set_pos(mem_bar, 5, 200);
    lv_obj_set_style_local_bg_color(mem_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, cpu_bar_bg_color);
    lv_obj_set_style_local_bg_color(mem_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, cpu_bar_indic_color);
    lv_obj_set_style_local_border_width(mem_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 2);
    lv_obj_set_style_local_border_color(mem_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, cont_color);
    lv_obj_set_style_local_border_width(mem_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 2);
    lv_obj_set_style_local_border_color(mem_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, cont_color);
    lv_obj_set_style_local_border_side(mem_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM);
    lv_obj_set_style_local_radius(mem_bar, LV_BAR_PART_BG, LV_STATE_DEFAULT, 2);
    lv_obj_set_style_local_radius(mem_bar, LV_BAR_PART_INDIC, LV_STATE_DEFAULT, 0);

    // 绘制温度表盘
    static lv_style_t arc_style;
    lv_style_reset(&arc_style);
    lv_style_init(&arc_style);
    lv_style_set_bg_opa(&arc_style, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_style_set_border_opa(&arc_style, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_style_set_line_width(&arc_style, LV_STATE_DEFAULT, 100);
    lv_style_set_line_color(&arc_style, LV_STATE_DEFAULT, lv_color_hex(0x081418));
    lv_style_set_line_rounded(&arc_style, LV_STATE_DEFAULT, false);

    lv_style_init(&arc_indic_style);
    lv_style_set_line_width(&arc_indic_style, LV_STATE_DEFAULT, 5);
    lv_style_set_pad_left(&arc_indic_style, LV_STATE_DEFAULT, 5);
    // lv_style_set_line_color(&arc_indic_style, LV_STATE_DEFAULT, lv_color_hex(0x50ff7d));
    lv_style_set_line_color(&arc_indic_style, LV_STATE_DEFAULT, lv_color_hex(0xff5d18));
    // lv_style_set_line_rounded(&arc_indic_style, LV_STATE_DEFAULT, false);

    temperature_arc = lv_arc_create(monitor_page, NULL);
    lv_arc_set_bg_angles(temperature_arc, 0, 360);
    lv_arc_set_start_angle(temperature_arc, 120);
    lv_arc_set_end_angle(temperature_arc, 420);
    lv_obj_set_size(temperature_arc, 125, 125);
    lv_obj_set_pos(temperature_arc, 125, 120);
    lv_obj_add_style(temperature_arc, LV_ARC_PART_BG, &arc_style);
    lv_obj_add_style(temperature_arc, LV_ARC_PART_INDIC, &arc_indic_style);
    // lv_obj_align(temperature_arc, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 10, 10);

    static lv_style_t font_24;
    lv_style_init(&font_24);
    lv_style_set_text_font(&font_24, LV_STATE_DEFAULT, &tencent_w7_24);

    temp_value_label = lv_label_create(monitor_page, NULL);
    lv_label_set_text(temp_value_label, "72℃");
    lv_obj_add_style(temp_value_label, LV_LABEL_PART_MAIN, &font_24);
    lv_obj_set_style_local_text_color(temp_value_label, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_set_pos(temp_value_label, 160, 170);

    lv_task_t *t = lv_task_create(task_cb, 1000, LV_TASK_PRIO_MID, &test_data);
}

String getParam(String name)
{
    // read parameter from server, for customhmtl input
    String value;
    if (wm.server->hasArg(name))
    {
        value = wm.server->arg(name);
    }
    return value;
}

void saveParamCallback()
{
    Serial.println("[CALLBACK] saveParamCallback");

    bright = getParam("bright").toInt();
    strcpy(netdataHost, getParam("host").c_str());
    netdataPort = getParam("port").toInt();

    setBrightness(bright);

    Serial.print("bright:");
    Serial.println(bright);
    Serial.print("netdataHost:");
    Serial.println(netdataHost);
    Serial.print("netdataPort:");
    Serial.println(netdataPort);
}

void Webwin()
{
    clk.setColorDepth(8);

    clk.createSprite(200, 60); //创建窗口
    clk.fillSprite(0x0000);    //填充率

    clk.setTextDatum(CC_DATUM); //设置文本数据
    clk.setTextColor(TFT_GREEN, 0x0000);
    clk.drawString("WiFi Connect Fail!", 100, 10, 2);
    clk.drawString("SSID:", 45, 40, 2);
    clk.setTextColor(TFT_WHITE, 0x0000);
    clk.drawString("routerMonitor", 125, 40, 2);
    clk.pushSprite(20, 50); //窗口位置

    clk.deleteSprite();
}

// WEB配网函数
void Webconfig()
{
  WiFi.mode(WIFI_STA); // explicitly set mode, esp defaults to STA+AP

    string brightStr = to_string(bright);
    const char* brightChar = brightStr.c_str();
    string netdataPortStr = to_string(netdataPort);
    const char* netdataPortChar = netdataPortStr.c_str();

    WiFiManagerParameter custom_bright("bright", "屏幕亮度（0-256）", brightChar, 3);
    WiFiManagerParameter custom_host("host", "netdata服务器IP", netdataHost, 15);
    WiFiManagerParameter custom_port("port", "netdata服务器端口", netdataPortChar, 5);
    WiFiManagerParameter p_lineBreak_notext("<p></p>");

    // wm.addParameter(&p_lineBreak_notext);
    // wm.addParameter(&custom_field);
    wm.addParameter(&p_lineBreak_notext);
    wm.addParameter(&custom_bright);
    wm.addParameter(&p_lineBreak_notext);
    wm.addParameter(&custom_host);
    wm.addParameter(&p_lineBreak_notext);
    wm.addParameter(&custom_port);
    wm.addParameter(&p_lineBreak_notext);
    wm.setSaveParamsCallback(saveParamCallback);

  bool res;
    res = wm.autoConnect("routerMonitor"); // anonymous ap
}

/*-------- NTP code ----------*/

const int NTP_PACKET_SIZE = 48;     // NTP时间在消息的前48字节中
uint8_t packetBuffer[NTP_PACKET_SIZE]; // buffer to hold incoming & outgoing packets

time_t getNtpTime()
{
    IPAddress ntpServerIP; // NTP server's ip address

    while (Udp.parsePacket() > 0)
        ; // discard any previously received packets
    // Serial.println("Transmit NTP Request");
    //  get a random server from the pool
    WiFi.hostByName(ntpServerName, ntpServerIP);
    // Serial.print(ntpServerName);
    // Serial.print(": ");
    // Serial.println(ntpServerIP);
    sendNTPpacket(ntpServerIP);
    uint32_t beginWait = millis();
    while (millis() - beginWait < 1500)
    {
        int size = Udp.parsePacket();
        if (size >= NTP_PACKET_SIZE)
        {
        Serial.println("Receive NTP Response");
        Udp.read(packetBuffer, NTP_PACKET_SIZE); // read packet into the buffer
        unsigned long secsSince1900;
        // convert four bytes starting at location 40 to a long integer
        secsSince1900 = (unsigned long)packetBuffer[40] << 24;
        secsSince1900 |= (unsigned long)packetBuffer[41] << 16;
        secsSince1900 |= (unsigned long)packetBuffer[42] << 8;
        secsSince1900 |= (unsigned long)packetBuffer[43];
        // Serial.println(secsSince1900 - 2208988800UL + timeZone * SECS_PER_HOUR);
        return secsSince1900 - 2208988800UL + timeZone * SECS_PER_HOUR;
        }
    }
    Serial.println("No NTP Response :-(");
    return 0; // 无法获取时间时返回0
}

// 向NTP服务器发送请求
void sendNTPpacket(IPAddress &address)
{
    // set all bytes in the buffer to 0
    memset(packetBuffer, 0, NTP_PACKET_SIZE);
    // Initialize values needed to form NTP request
    // (see URL above for details on the packets)
    packetBuffer[0] = 0b11100011; // LI, Version, Mode
    packetBuffer[1] = 0;          // Stratum, or type of clock
    packetBuffer[2] = 6;          // Polling Interval
    packetBuffer[3] = 0xEC;       // Peer Clock Precision
    // 8 bytes of zero for Root Delay & Root Dispersion
    packetBuffer[12] = 49;
    packetBuffer[13] = 0x4E;
    packetBuffer[14] = 49;
    packetBuffer[15] = 52;
    // all NTP fields have been given values, now
    // you can send a packet requesting a timestamp:
    Udp.beginPacket(address, 123); // NTP requests are to port 123
    Udp.write(packetBuffer, NTP_PACKET_SIZE);
    Udp.endPacket();
}

void autoLightCtl()
{
    if (!autoLight)
    {
        return;
    }
    if ((hour() == nightHour) && (minute() == nightMin) && (second() == nightSec))
    {
        setBrightness(nightLight);
        Serial.println("nightLight: ");
        Serial.println(nightLight);
    } else if ((hour() == dayHour) && (minute() == dayMin) && (second() == daySec))
    {
        setBrightness(dayLight);
        Serial.println("dayLight: ");
        Serial.println(dayLight);
    }
}

void loop()
{
    lv_task_handler(); /* let the GUI do its work */
    autoLightCtl();
}
