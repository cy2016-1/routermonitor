/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef TENCENT_W7_20_TIME
#define TENCENT_W7_20_TIME 1
#endif

#if TENCENT_W7_20_TIME

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x1f, 0xe3, 0xff, 0x38, 0x77, 0x7, 0x70, 0x77,
    0x7, 0x70, 0x77, 0xe, 0x70, 0xee, 0xe, 0xe0,
    0xee, 0xe, 0xe0, 0xee, 0x1c, 0xff, 0xc7, 0xf8,

    /* U+0031 "1" */
    0x7, 0x1f, 0x7f, 0x76, 0x46, 0x6, 0xe, 0xe,
    0xe, 0xc, 0xc, 0xc, 0x1c, 0x1c, 0x1c, 0x18,

    /* U+0032 "2" */
    0x1f, 0xe1, 0xfe, 0x0, 0x60, 0x6, 0x0, 0x60,
    0xe, 0x1, 0xe0, 0xfe, 0x3f, 0xc3, 0xe0, 0x70,
    0x7, 0x0, 0x60, 0x6, 0x0, 0x7f, 0xcf, 0xf8,

    /* U+0033 "3" */
    0x3f, 0x8f, 0xf0, 0x1c, 0x7, 0x1, 0xc0, 0x70,
    0x38, 0x7c, 0x1f, 0x80, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0xef, 0xfb, 0xfc,

    /* U+0034 "4" */
    0x7, 0x1, 0xc0, 0x30, 0xe, 0x1, 0x8c, 0x73,
    0x9c, 0x73, 0xc, 0xe1, 0x9f, 0xff, 0xff, 0x81,
    0xc0, 0x38, 0x6, 0x0, 0xc0, 0x18,

    /* U+0035 "5" */
    0x3f, 0xe7, 0xf8, 0xc0, 0x18, 0x7, 0x0, 0xe0,
    0x1f, 0xe3, 0xfe, 0x1, 0xc0, 0x38, 0x7, 0x0,
    0xe0, 0x38, 0x7, 0x3f, 0xe7, 0xf8,

    /* U+0036 "6" */
    0x1f, 0xc7, 0xf8, 0xe0, 0x38, 0x7, 0x0, 0xe0,
    0x1c, 0x3, 0xfc, 0x7f, 0xdc, 0x3b, 0x87, 0x70,
    0xee, 0x1d, 0xc3, 0x3f, 0xe3, 0xf8,

    /* U+0037 "7" */
    0x7f, 0xef, 0xf8, 0x7, 0x0, 0xc0, 0x38, 0x6,
    0x1, 0xc0, 0x70, 0xe, 0x3, 0x80, 0x70, 0x1c,
    0x3, 0x80, 0xe0, 0x1c, 0x7, 0x0,

    /* U+0038 "8" */
    0x1f, 0xe3, 0xff, 0x78, 0x77, 0x7, 0x70, 0x77,
    0x7, 0x70, 0xe3, 0xfc, 0x7f, 0xe7, 0xe, 0xe0,
    0xee, 0xe, 0xe0, 0xee, 0x1c, 0xff, 0xc7, 0xf8,

    /* U+0039 "9" */
    0x3f, 0x9f, 0xf7, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x86, 0xff, 0x9f, 0xe0, 0x38, 0xe, 0x3,
    0x81, 0xcf, 0xf3, 0xf8,

    /* U+003A ":" */
    0x39, 0xcc, 0x0, 0x0, 0x0, 0x67, 0x38,

    /* U+5206 "分" */
    0x3, 0x8c, 0x1, 0xc3, 0x80, 0xe0, 0x60, 0x38,
    0x1c, 0x1c, 0x3, 0xe, 0x0, 0xe7, 0x0, 0x1b,
    0xff, 0xff, 0x1f, 0xff, 0x0, 0xe1, 0xc0, 0x30,
    0x60, 0x1c, 0x18, 0x6, 0x6, 0x3, 0x81, 0x81,
    0xc0, 0xe0, 0xe0, 0x38, 0x70, 0x7e, 0x38, 0x1f,
    0x0,

    /* U+5929 "天" */
    0xf, 0xff, 0xe3, 0xff, 0xf8, 0x1, 0xc0, 0x0,
    0x38, 0x0, 0x7, 0x0, 0x0, 0xe0, 0xf, 0xff,
    0xf9, 0xff, 0xff, 0x0, 0xe0, 0x0, 0x1e, 0x0,
    0x7, 0xe0, 0x1, 0xce, 0x0, 0x39, 0xc0, 0xe,
    0x1c, 0x3, 0x81, 0x80, 0xe0, 0x38, 0x38, 0x3,
    0x8e, 0x0, 0x70,

    /* U+65F6 "时" */
    0x0, 0x0, 0xc3, 0xf0, 0xc, 0x3f, 0x80, 0xc3,
    0x1f, 0xff, 0x33, 0x7f, 0xf3, 0x30, 0x18, 0x33,
    0x61, 0x83, 0xf3, 0x18, 0x7f, 0x31, 0x86, 0x33,
    0x18, 0x63, 0x3b, 0x86, 0x61, 0xb8, 0x66, 0x1b,
    0x6, 0x60, 0x30, 0xe6, 0x3, 0xf, 0xe0, 0x30,
    0x0, 0x1f, 0x0, 0x1, 0xf0,

    /* U+79D2 "秒" */
    0x1, 0xc1, 0x81, 0xfc, 0x30, 0x1f, 0xf, 0x60,
    0x71, 0xb6, 0x6, 0x1b, 0x63, 0xfd, 0xb6, 0x3f,
    0xf3, 0x30, 0x63, 0x33, 0x7, 0xf3, 0x31, 0x7e,
    0x76, 0x3f, 0x86, 0xe3, 0xd8, 0xc, 0x2d, 0x81,
    0x86, 0xd8, 0x70, 0x6d, 0x8e, 0x6, 0xc7, 0xc0,
    0xc, 0xf0, 0x1, 0xcc, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 211, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 24, .adv_w = 145, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 190, .box_w = 12, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 64, .adv_w = 177, .box_w = 10, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 84, .adv_w = 207, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 106, .adv_w = 182, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 128, .adv_w = 189, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 150, .adv_w = 173, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 172, .adv_w = 201, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 196, .adv_w = 190, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 216, .adv_w = 88, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 223, .adv_w = 320, .box_w = 18, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 264, .adv_w = 320, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 307, .adv_w = 320, .box_w = 20, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 352, .adv_w = 320, .box_w = 20, .box_h = 18, .ofs_x = -1, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x723, 0x13f0, 0x27cc
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 20998, .range_length = 10189, .glyph_id_start = 12,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 2, 3, 4, 5, 6,
    7, 8, 1, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 4, 5, 6, 1,
    7, 8, 9, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, -1, -2, -2, 0, -3, 0,
    0, 0, 0, 0, 0, -10, 0, -5,
    0, 0, 0, -3, 0, 0, 0, 0,
    -6, 0, 0, -3, -19, -3, -8, 0,
    -6, -12, -2, -3, 0, -10, 0, 0,
    0, 0, -5, 0, -3, 0, -11, 0,
    0, 0, 0, 0, 0, 0, -3, 3,
    -2, 0, -10, -1, 3, -3, 0, 0,
    -2, 0, -2, -1, -2, -3, 0, -2
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 8,
    .right_class_cnt     = 9,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t tencent_w7_20_time = {
#else
lv_font_t tencent_w7_20_time = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TENCENT_W7_20_TIME*/

