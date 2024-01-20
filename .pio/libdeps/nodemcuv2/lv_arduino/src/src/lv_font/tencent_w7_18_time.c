/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef TENCENT_W7_18_TIME
#define TENCENT_W7_18_TIME 1
#endif

#if TENCENT_W7_18_TIME

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x1f, 0xc7, 0xfd, 0xc1, 0xb0, 0x36, 0x6, 0xc0,
    0xd8, 0x3b, 0x6, 0xc0, 0xd8, 0x1b, 0x3, 0x60,
    0xef, 0xf8, 0xfe, 0x0,

    /* U+0031 "1" */
    0xe, 0x7f, 0xfb, 0x70, 0xc1, 0x83, 0x6, 0x1c,
    0x38, 0x60, 0xc1, 0x83, 0x0,

    /* U+0032 "2" */
    0x3f, 0xc3, 0xf8, 0x3, 0x0, 0x60, 0xc, 0x3,
    0x83, 0xf1, 0xf8, 0x78, 0xc, 0x1, 0x80, 0x30,
    0xf, 0xf9, 0xfe, 0x0,

    /* U+0033 "3" */
    0x7f, 0x1f, 0xc0, 0x60, 0x30, 0x19, 0xf8, 0xfc,
    0x6, 0x3, 0x1, 0x80, 0xc0, 0xef, 0xe7, 0xe0,

    /* U+0034 "4" */
    0x7, 0x0, 0xc0, 0x38, 0x6, 0x61, 0x8c, 0x73,
    0x8c, 0x63, 0x8c, 0x7f, 0xef, 0xf8, 0x6, 0x1,
    0xc0, 0x30, 0x6, 0x0,

    /* U+0035 "5" */
    0x3f, 0x3f, 0x98, 0xc, 0x6, 0x3, 0xf1, 0xfc,
    0x6, 0x3, 0x1, 0x80, 0xc0, 0xcf, 0xe7, 0xe0,

    /* U+0036 "6" */
    0x1f, 0x9f, 0xdc, 0xc, 0x6, 0x3, 0xf9, 0xff,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x6f, 0xf3, 0xf0,

    /* U+0037 "7" */
    0x7f, 0xbf, 0xe0, 0x38, 0xc, 0x7, 0x1, 0x80,
    0xe0, 0x70, 0x18, 0xe, 0x3, 0x1, 0xc0, 0x60,
    0x38, 0x0,

    /* U+0038 "8" */
    0x1f, 0x8f, 0xf3, 0xc, 0xc3, 0x30, 0xcf, 0xe7,
    0xf9, 0x86, 0xc1, 0xb0, 0x6c, 0x1b, 0xe, 0xff,
    0x1f, 0x80,

    /* U+0039 "9" */
    0x3f, 0x3f, 0xf8, 0x78, 0x3c, 0x1e, 0x1f, 0xfc,
    0xfe, 0x3, 0x1, 0x80, 0xc0, 0xef, 0xe7, 0xe0,

    /* U+003A ":" */
    0x33, 0x0, 0x0, 0x0, 0x6e,

    /* U+5206 "分" */
    0x7, 0x18, 0xe, 0x18, 0x1c, 0xc, 0x18, 0xe,
    0x38, 0x6, 0x70, 0x7, 0x9f, 0xfc, 0x7, 0xc,
    0x6, 0xc, 0xe, 0xc, 0xc, 0x1c, 0x18, 0x18,
    0x38, 0x18, 0x70, 0x18, 0xe0, 0xf8,

    /* U+5929 "天" */
    0x1f, 0xff, 0x80, 0x30, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xe, 0x0, 0x6, 0x0, 0xff, 0xfe, 0x3,
    0x80, 0x1, 0xe0, 0x1, 0xd8, 0x1, 0xce, 0x1,
    0xc3, 0x1, 0xc1, 0xc1, 0xc0, 0x71, 0xc0, 0x1c,

    /* U+65F6 "时" */
    0x0, 0x3, 0x0, 0x0, 0xc3, 0xf0, 0x30, 0xfc,
    0xc, 0x33, 0xff, 0xcc, 0xc0, 0xc6, 0x2c, 0x21,
    0xf9, 0x98, 0x7e, 0x66, 0x19, 0x99, 0x86, 0x66,
    0x61, 0x98, 0xd8, 0x66, 0x6, 0x31, 0x1, 0xf,
    0xc0, 0xc0, 0x0, 0xf0,

    /* U+79D2 "秒" */
    0x3, 0x86, 0xf, 0xe1, 0x83, 0x63, 0x78, 0x30,
    0xde, 0xc, 0x35, 0x8f, 0xfb, 0x20, 0xc6, 0xcc,
    0x31, 0xb3, 0x3f, 0xcc, 0xb, 0xc3, 0x67, 0xb0,
    0x31, 0xec, 0x1c, 0x5b, 0xe, 0x36, 0xce, 0xd,
    0x9e, 0x0, 0x66, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 190, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 130, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 33, .adv_w = 171, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 53, .adv_w = 159, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 69, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 89, .adv_w = 164, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 105, .adv_w = 170, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 121, .adv_w = 156, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 139, .adv_w = 181, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 157, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 173, .adv_w = 79, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 178, .adv_w = 288, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 208, .adv_w = 288, .box_w = 17, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 240, .adv_w = 288, .box_w = 18, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 276, .adv_w = 288, .box_w = 18, .box_h = 16, .ofs_x = 0, .ofs_y = -2}
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
    0, 0, 0, 0, 0, -9, 0, -5,
    0, 0, 0, -3, 0, 0, 0, 0,
    -5, 0, 0, -3, -17, -3, -7, 0,
    -6, -10, -2, -2, 0, -9, 0, 0,
    0, 0, -5, 0, -2, 0, -10, 0,
    0, 0, 0, 0, 0, 0, -3, 3,
    -2, 0, -9, -1, 3, -3, 0, 0,
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
const lv_font_t tencent_w7_18_time = {
#else
lv_font_t tencent_w7_18_time = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TENCENT_W7_18_TIME*/

