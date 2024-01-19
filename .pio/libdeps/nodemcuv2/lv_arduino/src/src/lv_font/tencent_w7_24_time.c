/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef TENCENT_W7_24_TIME
#define TENCENT_W7_24_TIME 1
#endif

#if TENCENT_W7_24_TIME

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0xf, 0xf0, 0x7f, 0xf3, 0x81, 0xce, 0x7, 0x38,
    0x1d, 0xc0, 0x77, 0x1, 0xdc, 0x7, 0x70, 0x39,
    0xc0, 0xe7, 0x3, 0xb8, 0xe, 0xe0, 0x3b, 0x80,
    0xee, 0x7, 0x38, 0x1c, 0xe0, 0x73, 0xff, 0x83,
    0xfc, 0x0,

    /* U+0031 "1" */
    0x7, 0x8f, 0xdf, 0xdf, 0xef, 0x72, 0x38, 0x1c,
    0xe, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x70, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0032 "2" */
    0x3f, 0xf0, 0xff, 0xc0, 0xe, 0x0, 0x70, 0x3,
    0x80, 0x1c, 0x1, 0xc0, 0x1e, 0x7, 0xf1, 0xff,
    0x1f, 0xc0, 0xf0, 0x7, 0x0, 0x30, 0x3, 0x80,
    0x1c, 0x0, 0xff, 0xe7, 0xff, 0x3f, 0xf0,

    /* U+0033 "3" */
    0x3f, 0xe3, 0xff, 0x0, 0x70, 0x7, 0x0, 0x70,
    0x7, 0x0, 0x70, 0xe, 0x1f, 0xc1, 0xfc, 0x0,
    0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0x1c,
    0x1, 0xcf, 0xfc, 0xff, 0x0,

    /* U+0034 "4" */
    0x3, 0x80, 0xe, 0x0, 0x70, 0x3, 0xc0, 0xe,
    0x0, 0x79, 0xc1, 0xc7, 0xe, 0x1c, 0x78, 0x71,
    0xc1, 0xcf, 0xe, 0x3f, 0xfe, 0xff, 0xf8, 0x3,
    0x80, 0xe, 0x0, 0x30, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0,

    /* U+0035 "5" */
    0x1f, 0xf8, 0xff, 0x86, 0x0, 0x30, 0x1, 0x80,
    0x1c, 0x0, 0xe0, 0x7, 0xfc, 0x3f, 0xf1, 0xff,
    0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1,
    0x80, 0x1c, 0x0, 0xe3, 0xfe, 0x1f, 0xe0,

    /* U+0036 "6" */
    0xf, 0xf8, 0xff, 0xcf, 0xfc, 0x70, 0x3, 0x80,
    0x38, 0x1, 0xc0, 0xe, 0x0, 0x7f, 0xf3, 0xff,
    0x9c, 0x1f, 0xc0, 0xee, 0x7, 0x70, 0x3b, 0x83,
    0xdc, 0x1e, 0xff, 0xf3, 0xff, 0xf, 0xf0,

    /* U+0037 "7" */
    0x3f, 0xfb, 0xff, 0xdf, 0xfc, 0x0, 0xe0, 0xe,
    0x0, 0x70, 0x7, 0x0, 0x38, 0x3, 0x80, 0x3c,
    0x1, 0xc0, 0x1e, 0x0, 0xe0, 0xe, 0x0, 0x70,
    0x7, 0x0, 0x78, 0x3, 0x80, 0x3c, 0x0,

    /* U+0038 "8" */
    0xf, 0xf8, 0x7f, 0xf1, 0xc1, 0xce, 0x7, 0x38,
    0x1c, 0xe0, 0x73, 0x81, 0xce, 0xe, 0x1f, 0xf0,
    0xff, 0xc7, 0x3, 0x9c, 0xe, 0xe0, 0x3b, 0x80,
    0xee, 0x3, 0xb8, 0x1c, 0xe0, 0x73, 0xff, 0xc7,
    0xfc, 0x0,

    /* U+0039 "9" */
    0x1f, 0xc7, 0xff, 0x7f, 0xf7, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0xf, 0xe0, 0xef, 0xfe, 0x7f,
    0xe0, 0xe, 0x0, 0xe0, 0x1e, 0x1, 0xc0, 0x1c,
    0xff, 0xcf, 0xf8, 0xff, 0x0,

    /* U+003A ":" */
    0x3c, 0xf3, 0x80, 0x0, 0x0, 0x0, 0x0, 0x7,
    0x1c, 0xf0,

    /* U+5206 "分" */
    0x1, 0xe3, 0x80, 0x7, 0x7, 0x0, 0x38, 0x1c,
    0x1, 0xe0, 0x38, 0xf, 0x0, 0xe0, 0x38, 0x3,
    0xc1, 0xe0, 0x7, 0xf, 0x0, 0x1e, 0x78, 0x0,
    0x3b, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x0, 0x38,
    0x38, 0x1, 0xc0, 0xe0, 0x7, 0x3, 0x80, 0x38,
    0xc, 0x1, 0xc0, 0x70, 0xf, 0x1, 0xc0, 0x38,
    0x7, 0x1, 0xc0, 0x1c, 0xe, 0x7, 0xf0, 0xf0,
    0x1f, 0xc0,

    /* U+5929 "天" */
    0xf, 0xff, 0xfc, 0x1f, 0xff, 0xf8, 0x0, 0x70,
    0x0, 0x0, 0xe0, 0x0, 0x1, 0xc0, 0x0, 0x3,
    0x80, 0x0, 0x7, 0x0, 0x0, 0xe, 0x0, 0x3f,
    0xff, 0xfe, 0x7f, 0xff, 0xf8, 0x0, 0xe0, 0x0,
    0x3, 0x80, 0x0, 0x7, 0xe0, 0x0, 0x1c, 0xe0,
    0x0, 0x79, 0xe0, 0x1, 0xe1, 0xc0, 0x7, 0x81,
    0xc0, 0x1e, 0x3, 0xc0, 0x78, 0x3, 0x81, 0xe0,
    0x3, 0x87, 0x80, 0x7, 0x80,

    /* U+65F6 "时" */
    0x0, 0x0, 0x1c, 0x0, 0x0, 0x1c, 0x1f, 0xc0,
    0x18, 0x1f, 0xe0, 0x18, 0x18, 0xdf, 0xff, 0x38,
    0xdf, 0xff, 0x38, 0xc0, 0x38, 0x39, 0xc0, 0x38,
    0x31, 0xdc, 0x38, 0x3f, 0xdc, 0x30, 0x3f, 0xcc,
    0x30, 0x31, 0x8e, 0x30, 0x71, 0x8e, 0x70, 0x71,
    0x8e, 0x70, 0x73, 0x86, 0x70, 0x63, 0x87, 0x70,
    0x63, 0x80, 0x60, 0x63, 0x80, 0x60, 0x7f, 0x0,
    0x60, 0xff, 0x7, 0xe0, 0x0, 0x7, 0xe0,

    /* U+79D2 "秒" */
    0x0, 0x70, 0x60, 0x3f, 0xc0, 0xc0, 0x7f, 0x3,
    0x80, 0x1c, 0x3f, 0x60, 0x30, 0x6e, 0xc0, 0x61,
    0xdd, 0x8f, 0xfb, 0xb3, 0x9f, 0xf6, 0x67, 0x7,
    0x1c, 0xce, 0xe, 0x39, 0x8c, 0x7f, 0x67, 0x1,
    0xb7, 0xce, 0x63, 0x6c, 0x1d, 0xc6, 0xd8, 0x7,
    0xd, 0xb0, 0x1c, 0x37, 0x60, 0x78, 0x6e, 0xc1,
    0xe0, 0xdd, 0x8f, 0x3, 0xb8, 0xfc, 0x0, 0x63,
    0xc0, 0x0, 0xc6, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 253, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 34, .adv_w = 174, .box_w = 9, .box_h = 19, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 56, .adv_w = 228, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 87, .adv_w = 212, .box_w = 12, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 116, .adv_w = 248, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 150, .adv_w = 218, .box_w = 13, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 181, .adv_w = 227, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 212, .adv_w = 208, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 243, .adv_w = 241, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 277, .adv_w = 228, .box_w = 12, .box_h = 19, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 306, .adv_w = 106, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 316, .adv_w = 384, .box_w = 22, .box_h = 21, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 374, .adv_w = 384, .box_w = 23, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 435, .adv_w = 384, .box_w = 24, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 498, .adv_w = 384, .box_w = 23, .box_h = 21, .ofs_x = 0, .ofs_y = -3}
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
    0, 0, -1, -2, -2, 0, -4, 0,
    0, 0, 0, 0, 0, -12, 0, -6,
    0, 0, 0, -4, 0, 0, 0, 0,
    -7, 0, 0, -4, -23, -4, -9, 0,
    -8, -14, -2, -3, 0, -12, 0, 0,
    0, 0, -6, 0, -3, 0, -13, 0,
    0, 0, 0, 0, 0, 0, -4, 4,
    -2, 0, -12, -2, 4, -4, 0, 0,
    -2, 0, -2, -1, -2, -4, 0, -2
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
const lv_font_t tencent_w7_24_time = {
#else
lv_font_t tencent_w7_24_time = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TENCENT_W7_24_TIME*/

