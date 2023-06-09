// Copyright 2021 Muhammad Rafli Ardiansyah (@rafliard23)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B0 }
#define DIP_SWITCH_PINS { B6, B7, B8, B9 }

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x2339
#define DEVICE_VER   0x0001
#define MANUFACTURER rafliard23
#define PRODUCT      rfr

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { A7, A6, A5, A4 }
#define MATRIX_COL_PINS { A3, A2, A1, A0 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 2

#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
