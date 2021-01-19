/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x1209
#define PRODUCT_ID 0x3735
#define DEVICE_VER 0x0001
#define MANUFACTURER Oleg Senchenko
#define PRODUCT JiaEX

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS \
    { D5, C1, D3, D6, C2 }
#define MATRIX_COL_PINS \
    { D2, D4, E0, C3, C6, C5, C7 }

#define MATRIX_ROW_PINS_RIGHT \
    { F2, F0, A4, F1, F4 }

#define MATRIX_COL_PINS_RIGHT \
    { C7, C4, A3, F7, F6, F5, F3, A0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define MASTER_LEFT
#define SPLIT_HAND_PIN B1
#define USE_I2C
#define F_SCL 400000UL  // SCL frequency
#define SLAVE_I2C_ADDRESS 0x32

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

#define LEADER_TIMEOUT 350
#define LEADER_PER_KEY_TIMING
#define ONESHOT_TIMEOUT 350


#define COMBO_COUNT 4
#define COMBO_TERM 100

// #define DEBUG_MATRIX_SCAN_RATE