#pragma bank=11
#include "UI.h"
#include "BankData.h"
#include "game.h"

UINT8 ui_bank = 11;

const unsigned char ui_frame_tl_tiles[] = { 0xC0 };
const unsigned char ui_frame_bl_tiles[] = { 0xE1 };
const unsigned char ui_frame_tr_tiles[] = { 0xC2 };
const unsigned char ui_frame_br_tiles[] = { 0xE3 };
const unsigned char ui_frame_t_tiles[] = { 0xC1 };
const unsigned char ui_frame_b_tiles[] = { 0xE2 };
const unsigned char ui_frame_l_tiles[] = { 0xC3 };
const unsigned char ui_frame_r_tiles[] = { 0xC4 };
const unsigned char ui_frame_bg_tiles[] = { 0xC5 };

/*
const unsigned char global_tileset[] = {
  0x3F, 0x00, 0x7F, 0x3F, 0xC0, 0x40, 0xDF, 0x5F, 0xF0, 0x50, 0xD0, 0x50, 0xF0,
  0x50, 0xF0, 0x50, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0xFE, 0xFC, 0x03,
  0x02, 0xFB, 0xFA, 0x0F, 0x0A, 0x0B, 0x0A, 0x0F, 0x0A, 0x0F, 0x0A, 0xF0,
  0x50, 0xF0, 0x50, 0xF0, 0x50, 0xF0, 0x50, 0xF0, 0x50, 0xF0, 0x50, 0xF0,
  0x50, 0xF0, 0x50, 0x0F, 0x0A, 0x0F, 0x0A, 0x0F, 0x0A, 0x0F, 0x0A, 0x0F,
  0x0A, 0x0F, 0x0A, 0x0F, 0x0A, 0x0F, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x40,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x57, 0x57, 0x55, 0x55, 0x77, 0x77, 0x54,
  0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0x77, 0x25,
  0x25, 0x27, 0x27, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
  0x10, 0x38, 0x38, 0x54, 0x54, 0x50, 0x50, 0x38, 0x38, 0x14, 0x14, 0x54,
  0x54, 0x38, 0x38, 0x00, 0x00, 0x24, 0x24, 0x54, 0x54, 0x28, 0x28, 0x10,
  0x10, 0x28, 0x28, 0x54, 0x54, 0x48, 0x48, 0x00, 0x00, 0x30, 0x30, 0x48,
  0x48, 0x50, 0x50, 0x20, 0x20, 0x54, 0x54, 0x48, 0x48, 0x34, 0x34, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x18, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x08,
  0x08, 0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x10, 0x10, 0x54, 0x54, 0x38, 0x38, 0x54, 0x54, 0x10,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x7C,
  0x7C, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x04,
  0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x3C, 0x62, 0x62, 0x52, 0x52, 0x4A, 0x4A, 0x46, 0x46, 0x3C,
  0x3C, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x28, 0x28, 0x08, 0x08, 0x08,
  0x08, 0x08, 0x08, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42,
  0x42, 0x02, 0x02, 0x3C, 0x3C, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x7C, 0x02, 0x02, 0x0C, 0x0C, 0x02, 0x02, 0x02, 0x02, 0x7E,
  0x7E, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x48, 0x48, 0x7E,
  0x7E, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x40,
  0x40, 0x7C, 0x7C, 0x02, 0x02, 0x02, 0x02, 0x7C, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x3C, 0x40, 0x40, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x3C,
  0x3C, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x02, 0x02, 0x04, 0x04, 0x08,
  0x08, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42,
  0x42, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x02, 0x02, 0x3C,
  0x3C, 0x00, 0x00, 0xF8, 0x58, 0xF4, 0x54, 0xFA, 0x52, 0xFD, 0x51, 0xFB,
  0x52, 0xF6, 0x54, 0xFC, 0x58, 0xF8, 0x50, 0x18, 0x18, 0x18, 0x18, 0x00,
  0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x10, 0x10, 0xD0,
  0x70, 0xF0, 0x50, 0xD0, 0x70, 0xF0, 0x50, 0xDF, 0x7F, 0xC0, 0x7F, 0x7F,
  0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x0B, 0x0E, 0x0F, 0x0A, 0x0B,
  0x0E, 0x0F, 0x0A, 0xFB, 0xFE, 0x03, 0xFE, 0xFE, 0xFC, 0xFC, 0x00, 0x00,
  0x00, 0x30, 0x30, 0x48, 0x48, 0x08, 0x08, 0x30, 0x30, 0x00, 0x00, 0x20,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x2A, 0x2A, 0x3A, 0x3A, 0x3A,
  0x3A, 0x24, 0x24, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42,
  0x42, 0x42, 0x42, 0x7E, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x7C, 0x42, 0x42, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42, 0x42, 0x40, 0x40, 0x40,
  0x40, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x42,
  0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x7E, 0x7E, 0x40, 0x40, 0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x7E,
  0x7E, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x40, 0x40, 0x40, 0x40, 0x7C,
  0x7C, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42,
  0x42, 0x40, 0x40, 0x4E, 0x4E, 0x42, 0x42, 0x3E, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x7E, 0x42, 0x42, 0x42,
  0x42, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10,
  0x10, 0x10, 0x10, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x10,
  0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x60, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x44, 0x44, 0x48, 0x48, 0x50, 0x50, 0x70, 0x70, 0x48, 0x48, 0x44,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x66,
  0x66, 0x5A, 0x5A, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x42, 0x62, 0x62, 0x52, 0x52, 0x4A, 0x4A, 0x46, 0x46, 0x42,
  0x42, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42,
  0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x42,
  0x42, 0x42, 0x42, 0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x4A, 0x4A, 0x44, 0x44, 0x3A,
  0x3A, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C,
  0x7C, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x40,
  0x40, 0x3C, 0x3C, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42,
  0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44,
  0x44, 0x44, 0x44, 0x28, 0x28, 0x28, 0x28, 0x10, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x5A, 0x5A, 0x66, 0x66, 0x42,
  0x42, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x18,
  0x18, 0x24, 0x24, 0x42, 0x42, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x28,
  0x28, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x7C, 0x7C, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x7C,
  0x7C, 0x00, 0x00
};
*/

const unsigned char global_tileset[] = {
  0x3F,0x00,0x7F,0x3F,0xC0,0x40,0xDF,0x5F,0xF0,0x50,0xD0,0x50,0xF0,0x50,0xF0,
  0x50,0xFF,0x00,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xFC,0x00,0xFE,0xFC,0x03,0x02,0xFB,0xFA,0x0F,0x0A,0x0B,0x0A,0x0F,
  0x0A,0x0F,0x0A,0xF0,0x50,0xF0,0x50,0xF0,0x50,0xF0,0x50,0xF0,0x50,0xF0,0x50,
  0xF0,0x50,0xF0,0x50,0x0F,0x0A,0x0F,0x0A,0x0F,0x0A,0x0F,0x0A,0x0F,0x0A,0x0F,
  0x0A,0x0F,0x0A,0x0F,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
  0x40,0x00,0x00,0x40,0x40,0x00,0x00,0x00,0x00,0x57,0x57,0x55,0x55,0x77,0x77,
  0x54,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x77,0x77,0x25,0x25,0x27,
  0x27,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x38,0x38,0x54,0x54,
  0x50,0x50,0x38,0x38,0x14,0x14,0x54,0x54,0x38,0x38,0x00,0x00,0x24,0x24,0x54,
  0x54,0x28,0x28,0x10,0x10,0x28,0x28,0x54,0x54,0x48,0x48,0x00,0x00,0x30,0x30,
  0x48,0x48,0x50,0x50,0x20,0x20,0x54,0x54,0x48,0x48,0x34,0x34,0x18,0x18,0x08,
  0x08,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x08,0x08,0x10,0x10,0x10,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x00,
  0x00,0x10,0x10,0x08,0x08,0x08,0x08,0x04,0x04,0x04,0x04,0x04,0x04,0x08,0x08,
  0x00,0x00,0x00,0x00,0x10,0x10,0x54,0x54,0x38,0x38,0x54,0x54,0x10,0x10,0x00,
  0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x7C,0x7C,0x10,0x10,0x10,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x20,0x40,
  0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x40,0x40,0x00,0x00,0x00,0x00,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,
  0x20,0x20,0x40,0x40,0x00,0x00,0x00,0x00,0x3C,0x3C,0x62,0x62,0x52,0x52,0x4A,
  0x4A,0x46,0x46,0x3C,0x3C,0x00,0x00,0x00,0x00,0x18,0x18,0x28,0x28,0x08,0x08,
  0x08,0x08,0x08,0x08,0x3C,0x3C,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x02,
  0x02,0x3C,0x3C,0x40,0x40,0x7E,0x7E,0x00,0x00,0x00,0x00,0x7C,0x7C,0x02,0x02,
  0x0C,0x0C,0x02,0x02,0x02,0x02,0x7E,0x7E,0x00,0x00,0x00,0x00,0x40,0x40,0x40,
  0x40,0x48,0x48,0x7E,0x7E,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x7E,0x7E,
  0x40,0x40,0x7C,0x7C,0x02,0x02,0x02,0x02,0x7C,0x7C,0x00,0x00,0x00,0x00,0x3C,
  0x3C,0x40,0x40,0x7C,0x7C,0x42,0x42,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,
  0x7E,0x7E,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x00,0x00,0x00,
  0x00,0x3C,0x3C,0x42,0x42,0x3C,0x3C,0x42,0x42,0x42,0x42,0x3C,0x3C,0x00,0x00,
  0x00,0x00,0x3C,0x3C,0x42,0x42,0x42,0x42,0x3E,0x3E,0x02,0x02,0x3C,0x3C,0x00,
  0x00,0xF8,0x58,0xF4,0x54,0xFA,0x52,0xFD,0x51,0xFB,0x52,0xF6,0x54,0xFC,0x58,
  0xF8,0x50,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x08,
  0x08,0x10,0x10,0xD0,0x70,0xF0,0x50,0xD0,0x70,0xF0,0x50,0xDF,0x7F,0xC0,0x7F,
  0x7F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,
  0xFF,0xFF,0xFF,0xFF,0x00,0x0B,0x0E,0x0F,0x0A,0x0B,0x0E,0x0F,0x0A,0xFB,0xFE,
  0x03,0xFE,0xFE,0xFC,0xFC,0x00,0x00,0x00,0x30,0x30,0x48,0x48,0x08,0x08,0x30,
  0x30,0x00,0x00,0x20,0x20,0x00,0x00,0x00,0x00,0x3C,0x3C,0x2A,0x2A,0x3A,0x3A,
  0x3A,0x3A,0x24,0x24,0x1C,0x1C,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x42,
  0x42,0x7E,0x7E,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x7C,0x7C,0x42,0x42,
  0x7C,0x7C,0x42,0x42,0x42,0x42,0x7C,0x7C,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x40,0x40,0x40,0x40,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,0x7C,0x7C,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x7C,0x7C,0x00,0x00,0x00,0x00,0x7E,0x7E,0x40,0x40,0x7C,0x7C,0x40,0x40,0x40,0x40,0x7E,0x7E,0x00,0x00,0x00,0x00,0x7E,0x7E,0x40,0x40,0x40,0x40,0x7C,0x7C,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x40,0x40,0x4E,0x4E,0x42,0x42,0x3E,0x3E,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x7E,0x7E,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x7C,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x7C,0x00,0x00,0x00,0x00,0x7C,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x60,0x60,0x00,0x00,0x00,0x00,0x44,0x44,0x48,0x48,0x50,0x50,0x70,0x70,0x48,0x48,0x44,0x44,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7E,0x7E,0x00,0x00,0x00,0x00,0x42,0x42,0x66,0x66,0x5A,0x5A,0x42,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x42,0x42,0x62,0x62,0x52,0x52,0x4A,0x4A,0x46,0x46,0x42,0x42,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,0x7C,0x7C,0x42,0x42,0x42,0x42,0x7C,0x7C,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x42,0x42,0x4A,0x4A,0x44,0x44,0x3A,0x3A,0x00,0x00,0x00,0x00,0x7C,0x7C,0x42,0x42,0x42,0x42,0x7C,0x7C,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x3E,0x3E,0x40,0x40,0x3C,0x3C,0x02,0x02,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,0x7C,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,0x44,0x44,0x44,0x44,0x44,0x44,0x28,0x28,0x28,0x28,0x10,0x10,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x5A,0x5A,0x66,0x66,0x42,0x42,0x00,0x00,0x00,0x00,0x42,0x42,0x24,0x24,0x18,0x18,0x18,0x18,0x24,0x24,0x42,0x42,0x00,0x00,0x00,0x00,0x44,0x44,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x7C,0x7C,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x7C,0x7C,0x00,0x00
};

void UIInit_b()
{
  set_bkg_data(192, 64, global_tileset);
}

void UIUpdate_b()
{
  if ((time & 0x1) == 0) {
    draw_text(FALSE);
  }

  if (menu_y > menu_dest_y) {
    menu_y -= 2;
  } else if (menu_y < menu_dest_y) {
    menu_y += 2;
  }
  WY_REG = menu_y;
}

void UIDrawFrame_b(UBYTE x, UBYTE y, UBYTE width, UBYTE height)
{
  UBYTE i, j;
  set_win_tiles(x, y, 1, 1, ui_frame_tl_tiles);
  set_win_tiles(x, y + height - 1, 1, 1, ui_frame_bl_tiles);
  set_win_tiles(x + width - 1, y, 1, 1, ui_frame_tr_tiles);
  set_win_tiles(x + width - 1, y + height - 1, 1, 1, ui_frame_br_tiles);

  for (i = x + 1; i < (x + width - 1); i++) {
    set_win_tiles(i, y, 1, 1, ui_frame_t_tiles);
    set_win_tiles(i, y + height - 1, 1, 1, ui_frame_b_tiles);
    for (j = y + 1; j < (y + height - 1); j++) {
      set_win_tiles(i, j, 1, 1, ui_frame_bg_tiles);
    }
  }
  for (i = y + 1; i < (y + height - 1); i++) {
    set_win_tiles(x, i, 1, 1, ui_frame_l_tiles);
    set_win_tiles(x + width - 1, i, 1, 1, ui_frame_r_tiles);
  }
}
