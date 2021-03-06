// Converted using ConvPNG
// This file contains all the graphics sources for easier inclusion in a project
#ifndef __sprites_gfx__
#define __sprites_gfx__
#include <stdint.h>

#define canvas_width 128
#define canvas_height 64
#define canvas_size 8194
extern uint8_t canvas_data[8194];
#define canvas ((gfx_sprite_t*)canvas_data)

#define sizeof_sprites_gfx_pal 4
extern uint16_t sprites_gfx_pal[4];

#endif