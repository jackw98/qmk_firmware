#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xF155
#define DEVICE_VER      0x0001
#define MANUFACTURER    Bridge
#define PRODUCT         Fission
#define DESCRIPTION     A keyboard to get the best deal from JLBPCB

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/* pin assignment */
#define MATRIX_ROW_PINS { D4, C6, B6, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, E6, D7 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
