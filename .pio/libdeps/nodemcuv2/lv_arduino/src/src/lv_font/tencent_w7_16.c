/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef TENCENT_W7_16
#define TENCENT_W7_16 1
#endif

#if TENCENT_W7_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0025 "%" */
    0x78, 0x79, 0x1b, 0x26, 0x64, 0xcf, 0xb0, 0xc,
    0x1, 0x80, 0x60, 0x19, 0xe6, 0x64, 0xcc, 0xb1,
    0xbc, 0x3c,

    /* U+002E "." */
    0xe0,

    /* U+002F "/" */
    0x6, 0xc, 0x30, 0x60, 0xc3, 0x6, 0xc, 0x30,
    0x60, 0xc3, 0x6, 0xc, 0x30, 0x60,

    /* U+0030 "0" */
    0x3f, 0x8c, 0x36, 0xd, 0x83, 0x60, 0xd8, 0x36,
    0x1b, 0x6, 0xc1, 0xb0, 0x6c, 0x1b, 0xc, 0x7f,
    0x0,

    /* U+0031 "1" */
    0x1c, 0xff, 0xd3, 0x1c, 0x61, 0x86, 0x18, 0x61,
    0x8c, 0x30,

    /* U+0032 "2" */
    0x3f, 0x80, 0xc0, 0x60, 0x30, 0x38, 0x7d, 0xfc,
    0xfc, 0x70, 0x30, 0x38, 0x18, 0xf, 0xe0,

    /* U+0033 "3" */
    0x3f, 0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x78,
    0x6, 0x3, 0x1, 0x80, 0xc0, 0xc7, 0xe0,

    /* U+0034 "4" */
    0x6, 0x3, 0x0, 0xc0, 0x66, 0x39, 0x8c, 0x67,
    0x31, 0x8c, 0x7f, 0x80, 0xc0, 0x30, 0xc, 0x6,
    0x0,

    /* U+0035 "5" */
    0x3f, 0x18, 0x8, 0x4, 0x6, 0x3, 0xf8, 0xc,
    0x6, 0x3, 0x1, 0x80, 0xc0, 0xcf, 0xc0,

    /* U+0036 "6" */
    0x3f, 0x30, 0x60, 0x60, 0x60, 0x60, 0x7f, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc6, 0x7e,

    /* U+0037 "7" */
    0xff, 0x7, 0x7, 0xe, 0xe, 0x1c, 0x18, 0x38,
    0x30, 0x70, 0x60, 0xe0, 0xc0,

    /* U+0038 "8" */
    0x3f, 0x8c, 0x67, 0xd, 0xc6, 0x71, 0x9c, 0x63,
    0xe1, 0x8c, 0xc3, 0x30, 0xcc, 0x33, 0x18, 0x7e,
    0x0,

    /* U+0039 "9" */
    0x7e, 0x63, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e, 0x6,
    0x6, 0x6, 0x6, 0xc, 0xfc,

    /* U+0042 "B" */
    0x3f, 0x8c, 0x33, 0xc, 0xc3, 0x30, 0xdc, 0x67,
    0xf1, 0x86, 0x61, 0x98, 0x66, 0x1b, 0x8c, 0xfe,
    0x0,

    /* U+0043 "C" */
    0x3f, 0x20, 0x60, 0x60, 0x60, 0x60, 0x60, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x7e,

    /* U+004B "K" */
    0x38, 0x66, 0x18, 0xc7, 0x18, 0xc3, 0x30, 0x66,
    0x1f, 0x83, 0x30, 0x63, 0xc, 0x61, 0x8c, 0x30,
    0xce, 0x18,

    /* U+004D "M" */
    0x3f, 0xf8, 0xc6, 0x36, 0x18, 0xd8, 0xe3, 0x63,
    0xd, 0x8c, 0x36, 0x31, 0x98, 0xc6, 0xe3, 0x1b,
    0xc, 0x6c, 0x71, 0xb1, 0x86, 0xc6, 0x18,

    /* U+0050 "P" */
    0x3f, 0xcc, 0x33, 0xc, 0xc3, 0x30, 0xdc, 0x67,
    0x19, 0xfc, 0x60, 0x18, 0x6, 0x3, 0x80, 0xe0,
    0x0,

    /* U+0053 "S" */
    0x3f, 0x98, 0x18, 0xc, 0x6, 0x3, 0x1, 0xfc,
    0x6, 0x3, 0x1, 0x81, 0xc0, 0xcf, 0xe0,

    /* U+0055 "U" */
    0x70, 0xd8, 0x36, 0xd, 0x83, 0x61, 0xd8, 0x6e,
    0x1b, 0x6, 0xc1, 0xb0, 0x6c, 0x33, 0xc, 0x7e,
    0x0,

    /* U+0065 "e" */
    0x3e, 0x63, 0x63, 0x63, 0xe3, 0xfe, 0xc0, 0xc0,
    0xc0, 0x7c,

    /* U+006B "k" */
    0x30, 0x18, 0xc, 0x6, 0x3, 0x19, 0x98, 0xcc,
    0xcc, 0x7c, 0x32, 0x19, 0x8c, 0xc6, 0x66, 0x18,

    /* U+006D "m" */
    0x7f, 0xf3, 0x18, 0xd8, 0xc6, 0x8c, 0x3c, 0x61,
    0xe3, 0xf, 0x18, 0xd8, 0xc6, 0xc6, 0x36, 0x31,
    0x80,

    /* U+006F "o" */
    0x3e, 0x63, 0x63, 0x63, 0xc3, 0xc3, 0xc6, 0xc6,
    0xc6, 0x7c,

    /* U+0072 "r" */
    0x3e, 0x61, 0x83, 0x6, 0xc, 0x18, 0x30, 0xc1,
    0x80,

    /* U+0073 "s" */
    0x3e, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x6, 0x6,
    0x6, 0xfc,

    /* U+0079 "y" */
    0x61, 0x31, 0x98, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x84, 0x7e, 0x3, 0x1, 0x80, 0xcf, 0xc0,

    /* U+00B0 "°" */
    0x7b, 0x3c, 0xb2, 0xf8,

    /* U+2103 "℃" */
    0x7c, 0xff, 0xf7, 0xfc, 0xd8, 0x33, 0x60, 0xf9,
    0x80, 0xe, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0, 0x3f, 0x80, 0x7c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 210, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 71, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 19, .adv_w = 82, .box_w = 7, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 33, .adv_w = 169, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 50, .adv_w = 116, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 60, .adv_w = 152, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 75, .adv_w = 142, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 90, .adv_w = 166, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 107, .adv_w = 145, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 122, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 135, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 148, .adv_w = 161, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 165, .adv_w = 152, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 178, .adv_w = 162, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 195, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 208, .adv_w = 165, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 226, .adv_w = 242, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 249, .adv_w = 162, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 266, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 281, .adv_w = 177, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 298, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 308, .adv_w = 144, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 324, .adv_w = 237, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 341, .adv_w = 152, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 351, .adv_w = 106, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 360, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 370, .adv_w = 154, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 385, .adv_w = 106, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 389, .adv_w = 239, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x1d, 0x1e, 0x26,
    0x28, 0x2b, 0x2e, 0x30, 0x40, 0x46, 0x48, 0x4a,
    0x4d, 0x4e, 0x54, 0x8b, 0x20de
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 37, .range_length = 8415, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 29, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11, 3, 12, 13,
    14, 15, 16, 17, 0, 18, 19, 20,
    21, 22, 23, 24, 25, 13
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 4, 10, 11, 12, 13, 14,
    13, 13, 13, 15, 16, 17, 18, 19,
    17, 20, 21, 22, 23, 23
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -20, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 3, 0, 5, 0, 3,
    10, 3, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -2, -2, 0, -3,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -3, 0,
    0, 0, 0, -8, 0, -4, 0, 0,
    0, 0, -3, -3, -1, -1, -1, 0,
    -2, 0, -3, -6, 0, -5, 0, -3,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, -4, -2, 0, -1, 0, 0, -1,
    0, -6, -15, -8, -5, -3, -15, -3,
    -6, 0, -5, -9, -2, -2, -3, -2,
    -8, 0, -2, -1, -2, 0, -2, 0,
    -23, -8, 0, 0, 0, -8, 0, 0,
    0, 0, -4, 0, -2, 0, 0, -2,
    -1, 0, 0, 0, 0, 0, 0, -13,
    -8, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 2, 0, -2, 0,
    3, 2, 0, 0, 1, 0, -10, 3,
    -26, -26, -3, 3, -2, 0, -8, -1,
    3, -3, 0, 0, 0, -2, -3, -8,
    -1, -3, -8, -8, -3, 3, -3, 0,
    -3, 0, -2, 0, -2, -1, -2, -3,
    0, -2, 0, 0, -3, 0, -1, -1,
    -1, 0, -1, 0, -10, 0, 0, 0,
    0, -3, 0, -1, 0, 0, -2, 0,
    0, -2, 0, -5, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -1,
    -5, 0, 2, -8, -1, 0, -5, -2,
    -1, -2, -8, 0, 0, 0, -2, 0,
    0, -3, 0, 0, 0, 0, -1, -5,
    0, -2, -7, -1, 3, -2, -1, -1,
    -4, -2, 0, -2, 0, -1, 0, -2,
    -4, 0, 0, 0, -8, 0, -3, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -31, -14, 0, 0, -3, 0,
    0, 0, 0, 0, 0, -1, 0, -1,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -1, -3, 0,
    0, -1, -1, 0, 0, 0, 0, 0,
    0, -3, 0, -9, 0, -4, 0, 0,
    -8, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -1, -3, 0, -3, -3, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -18, 0, -3, -2, -2, -9, 0,
    -5, -1, 0, -4, -2, 0, -1, -1,
    0, -1, -1, 0, 0, 0, 0, 0,
    -15, 0, -3, 0, -2, -10, 0, -3,
    0, 0, -4, 0, 0, -1, 0, 0,
    -1, 0, 0, 0, -26, -10, 0, 0,
    -3, -7, -4, 0, -3, 0, 3, -1,
    1, 0, 0, -1, -1, -1, -2, 0,
    -1, 0, 0, 0, 0, 0, -10, 0,
    -2, 0, 0, -5, 0, -2, 0, -4,
    0, -1, 0, 0, 0, 0, -1, 0,
    0, 0, 0, -3, 0, -13, 0, 0,
    0, 0, -3, 0, -2, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -12, -8, -9, 0,
    -10, 0, -8, 0, -10, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 25,
    .right_class_cnt     = 23,
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
    .cmap_num = 1,
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
const lv_font_t tencent_w7_16 = {
#else
lv_font_t tencent_w7_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if TENCENT_W7_16*/

