#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define UNICODE_SELECTED_MODES UC_LNX

#define VENDOR_ID       0x0000
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    red-hara
#define PRODUCT         fourteen4
#define DESCRIPTION     QMK keyboard firmware for fourteen4 keyboard

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCING_DELAY 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define MATRIX_ROWS 8
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS {D1, D0, D4, C6, D7, E6, B4, B5}
#define MATRIX_COL_PINS {B6, B2, B3, B1, F7, F6, F5}
#define UNUSED_PINS

#endif