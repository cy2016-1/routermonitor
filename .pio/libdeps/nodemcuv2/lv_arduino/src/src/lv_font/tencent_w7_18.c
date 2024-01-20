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

#ifndef TENCENT_W7_18
#define TENCENT_W7_18 1
#endif

#if TENCENT_W7_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0025 "%" */
    0x7c, 0x3f, 0xe3, 0xb3, 0x19, 0x99, 0x8f, 0xdc,
    0x7d, 0xc0, 0xc, 0x0, 0xc0, 0xf, 0xf8, 0xef,
    0xc6, 0xc6, 0x66, 0x36, 0x3f, 0x71, 0xf8,

    /* U+002E "." */
    0x7c,

    /* U+002F "/" */
    0x3, 0x6, 0x6, 0x6, 0xc, 0xc, 0x1c, 0x18,
    0x18, 0x38, 0x30, 0x30, 0x60, 0x60, 0xe0, 0xc0,
    0xc0,

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

    /* U+0042 "B" */
    0x1f, 0xc3, 0xfc, 0xe1, 0x9c, 0x33, 0x6, 0x7f,
    0x8f, 0xf1, 0x86, 0x70, 0xce, 0x19, 0x83, 0x30,
    0xe7, 0xf9, 0xfe, 0x0,

    /* U+0043 "C" */
    0x1f, 0x9f, 0xdc, 0xc, 0x6, 0x3, 0x1, 0x81,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xe3, 0xf0,

    /* U+004B "K" */
    0x18, 0x33, 0x86, 0x38, 0xe3, 0x8c, 0x31, 0x83,
    0x38, 0x3f, 0x7, 0xf0, 0x73, 0x7, 0x38, 0x61,
    0x86, 0x1c, 0x61, 0xce, 0xc,

    /* U+004D "M" */
    0x3f, 0xfe, 0x3f, 0xff, 0x38, 0xe3, 0x30, 0xc3,
    0x30, 0xc3, 0x30, 0xc3, 0x71, 0xc7, 0x71, 0xc6,
    0x71, 0xc6, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86,
    0xe3, 0x8e, 0xe3, 0x8e,

    /* U+0050 "P" */
    0x1f, 0xe7, 0xfc, 0xe1, 0x9c, 0x33, 0x6, 0x61,
    0x8c, 0x33, 0xfe, 0x7f, 0x8c, 0x1, 0x80, 0x30,
    0x6, 0x1, 0xc0, 0x0,

    /* U+0053 "S" */
    0x1f, 0xcf, 0xf3, 0x1, 0xc0, 0x70, 0x18, 0x7,
    0xf9, 0xfe, 0x3, 0x80, 0xe0, 0x38, 0xc, 0xff,
    0x3f, 0x80,

    /* U+0055 "U" */
    0x70, 0x6e, 0xd, 0x83, 0xb0, 0x76, 0xe, 0xc1,
    0x98, 0x37, 0x6, 0xc1, 0xd8, 0x3b, 0x7, 0x60,
    0xcf, 0xf8, 0xfe, 0x0,

    /* U+0065 "e" */
    0x3f, 0x3f, 0xd8, 0x6c, 0x76, 0x3f, 0xfb, 0xfd,
    0x80, 0xc0, 0x7f, 0x1f, 0x80,

    /* U+006B "k" */
    0x18, 0x3, 0x0, 0xe0, 0x1c, 0x3, 0xc, 0x63,
    0xc, 0xe1, 0x98, 0x7e, 0xf, 0xc1, 0x98, 0x33,
    0x86, 0x30, 0xc6, 0x38, 0xe0,

    /* U+006D "m" */
    0x3f, 0xfc, 0x7f, 0xfd, 0xc6, 0x1b, 0x8c, 0x36,
    0x18, 0x6c, 0x30, 0xd8, 0xe3, 0xb1, 0xc6, 0xe3,
    0xd, 0xc6, 0x1b, 0xc, 0x30,

    /* U+006F "o" */
    0x3f, 0x3f, 0xd8, 0x6c, 0x36, 0x1e, 0xf, 0xd,
    0x86, 0xc3, 0x7f, 0x9f, 0x80,

    /* U+0072 "r" */
    0x1f, 0x3e, 0x30, 0x70, 0x70, 0x60, 0x60, 0x60,
    0x60, 0xe0, 0xe0,

    /* U+0073 "s" */
    0x3f, 0x9f, 0x98, 0xc, 0x6, 0x3, 0xf9, 0xfc,
    0x6, 0x7, 0x7f, 0x1f, 0x80,

    /* U+0079 "y" */
    0x61, 0xb0, 0xd8, 0x7c, 0x3c, 0x3e, 0x1f, 0xd,
    0x86, 0xff, 0x3f, 0x81, 0xc0, 0xcf, 0xe7, 0xe0,

    /* U+00B0 "°" */
    0x7d, 0xfb, 0x96, 0x2f, 0xdf, 0x80,

    /* U+2103 "℃" */
    0x7c, 0x7e, 0xfc, 0xfe, 0xcd, 0xc0, 0xcd, 0x80,
    0xcd, 0x80, 0xf9, 0x80, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x0, 0x3, 0x0, 0x3, 0x0,
    0x3, 0xfc, 0x1, 0xf8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 236, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 79, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 24, .adv_w = 93, .box_w = 8, .box_h = 17, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 41, .adv_w = 190, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 130, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 74, .adv_w = 171, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 94, .adv_w = 159, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 110, .adv_w = 186, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 130, .adv_w = 164, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 146, .adv_w = 170, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 162, .adv_w = 156, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 180, .adv_w = 181, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 198, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 214, .adv_w = 182, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 234, .adv_w = 159, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 250, .adv_w = 186, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 271, .adv_w = 272, .box_w = 16, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 299, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 319, .adv_w = 170, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 337, .adv_w = 200, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 357, .adv_w = 160, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 370, .adv_w = 162, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 391, .adv_w = 266, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 412, .adv_w = 171, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 425, .adv_w = 120, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 436, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 449, .adv_w = 173, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 465, .adv_w = 119, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 471, .adv_w = 269, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = -1}
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
    0, 0, 0, 0, -23, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 3, 0, 6, 0, 3,
    12, 3, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -2, -2, 0, -3,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -3, 0,
    0, 0, 0, -9, 0, -5, 0, 0,
    0, 0, -3, -3, -1, -1, -1, 0,
    -2, 0, -3, -6, 0, -6, 0, -3,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, -5, -2, 0, -1, 0, 0, -1,
    0, -7, -17, -9, -6, -3, -17, -3,
    -7, 0, -6, -10, -2, -2, -3, -2,
    -9, 0, -2, -1, -2, 0, -2, 0,
    -26, -9, 0, 0, 0, -9, 0, 0,
    0, 0, -5, 0, -2, 0, 0, -2,
    -1, 0, 0, 0, 0, 0, 0, -14,
    -9, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 2, 0, -2, 0,
    3, 2, 0, 0, 1, 0, -12, 3,
    -29, -29, -3, 3, -2, 0, -9, -1,
    3, -3, 0, 0, 0, -2, -3, -9,
    -1, -3, -9, -9, -3, 3, -3, 0,
    -3, 0, -2, 0, -2, -1, -2, -3,
    0, -2, 0, 0, -3, 0, -1, -1,
    -1, 0, -1, 0, -12, 0, 0, 0,
    0, -3, 0, -1, 0, 0, -2, 0,
    0, -2, 0, -6, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -1,
    -6, 0, 2, -9, -1, 0, -5, -2,
    -1, -2, -9, 0, 0, 0, -2, 0,
    0, -4, 0, 0, 0, 0, -1, -6,
    0, -2, -7, -1, 3, -2, -1, -1,
    -4, -2, 0, -2, 0, -1, 0, -2,
    -5, 0, 0, 0, -9, 0, -3, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -35, -16, 0, 0, -3, 0,
    0, 0, 0, 0, 0, -1, 0, -1,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -1, -3, 0,
    0, -1, -1, 0, 0, 0, 0, 0,
    0, -3, 0, -10, 0, -5, 0, 0,
    -9, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -1, -3, 0, -3, -3, 0, -1,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -20, 0, -3, -2, -2, -10, 0,
    -5, -1, 0, -4, -2, 0, -1, -1,
    0, -1, -1, 0, 0, 0, 0, 0,
    -17, 0, -3, 0, -2, -12, 0, -3,
    0, 0, -4, 0, 0, -1, 0, 0,
    -1, 0, 0, 0, -29, -11, 0, 0,
    -3, -7, -4, 0, -3, 0, 3, -1,
    1, 0, 0, -1, -1, -1, -2, 0,
    -1, 0, 0, 0, 0, 0, -12, 0,
    -2, 0, 0, -5, 0, -2, 0, -5,
    0, -1, 0, 0, 0, 0, -1, 0,
    0, 0, 0, -3, 0, -14, 0, 0,
    0, 0, -3, 0, -2, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -9, -10, 0,
    -12, 0, -9, 0, -12, 0, 0
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
const lv_font_t tencent_w7_18 = {
#else
lv_font_t tencent_w7_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
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



#endif /*#if TENCENT_W7_18*/

