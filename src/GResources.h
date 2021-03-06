#ifndef BOING_GRESOURCES_H
#define BOING_GRESOURCES_H

#include <BTypes.h>
#include "Resources.h"

enum {
  BKG_SLOT,
  PLAYER_SLOT,
  COMMON_SLOT,
  FONT_8x8_SLOT,
  FONT_16x16_SLOT
};


// BRaw slots
enum {
  SONG0_SLOT,
  SONG1_SLOT,
  SONG2_SLOT,
  SONG3_SLOT,
  SONG4_SLOT,
  SONG5_SLOT,
  SONG6_SLOT,
  SONG7_SLOT,
  SONG8_SLOT,
  SONG9_SLOT,
  SONG10_SLOT,
  SONG11_SLOT,
  SFX1_SLOT,
  SFX2_SLOT,
  SFX3_SLOT,
  SFX4_SLOT,
  SFX5_SLOT,
  SFX6_SLOT,
  SFX7_SLOT,
  SFX8_SLOT,
  SFX9_SLOT,
  SFX10_SLOT,
};


const TInt16 MAX_BBITMAP = SPLASH_BMP + 1;

const TUint16 IMG_DROP1 = 0;
const TUint16 IMG_DROP2 = 4;
const TUint16 IMG_DROP3 = 8;
const TUint16 IMG_DROP4 = 16;
const TUint16 IMG_DROP5 = 24;
const TUint16 IMG_DROP6 = 32;

const TUint16 COLOR_TEXT        = 7;
const TUint16 COLOR_TEXT_SHADOW = 12;
const TInt16 COLOR_TEXT_TRANSPARENT = -1;

const TUint16 IMG_PADDLE = 0;
const TUint16 IMG_BRICK_RED = 1;
const TUint16 IMG_BRICK_GREEN = 2;
const TUint16 IMG_BRICK_BLUE = 3;
const TUint16 IMG_BRICK_YELLOW = 4;
const TUint16 IMG_BALL = 8;

#endif //BOING_GRESOURCES_H
