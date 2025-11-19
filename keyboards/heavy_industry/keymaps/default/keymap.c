// Copyright 2025 Hara Red (@red-hara)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BL = 0,
    _RL,
    _FL,
};

/*
 *  _________________________________________   _________________________________________
 * |     |     | F1  | F2  | F3  | F4  | F5  | | F6  | F7  | F8  | F9  | F10 | F11 | F12 |
 * | Esc |  `  |  1  |  2  |  3  |  4  |  5  | |  6  |  7  |  8  |  9  |  0  |  -  |  =  |
 * |_____|_____|_____|_____|_____|_____|_____| |_____|_____|_____|_____|_____|_____|_____|
 * |/ _ \|     |     |     |     |     |     | |     |     |Insrt|Enter|PrtSc|     |     |
 * | |_| | Tab |  Q  |  W  |  E  |  R  |  T  | |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |
 * |\___/|_____|_____|_____|_____|_____|_____| |_____|_____|_____|_____|_____|_____|_____|
 *       |     |     |     | Del |     |     | |Left |Down | Up  |Right|     |     |
 *       |Caps |  A  |  S  |  D  |  F  |  G  | |  H  |  J  |  K  |  L  |  ;  |  '  |
 *       |_____|_____|_____|_____|_____|_____| |Home_|PgDw_|PgUp_|_End_|_____|_____|
 *       |     |     |BkSp |     |     |     | |     |     |     |     |     |     |
 *       |LShft|  Z  |  X  |  C  |  V  |  B  | |  N  |  M  |  ,  |  .  |  /  |  \  |
 *       |_____|_____|_____|_____|_____|_____| |_____|_____|_____|_____|_____|_____|
 *       |     |     |     |     |Raise|     | |     |Raise|     |     |     |     |
 *       |LCtrl|     |LSup |Lalt |     |Space| |RShft|     |RAlt |RSup |Menu |RCtrl|
 *       |_____|_Fn__|_____|_____|_____|_____| |_____|_____|_____|_____|_____|_____|
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_default(
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,     KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_MUTE, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
                 KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                 KC_LCTL, MO(_FL), KC_LCMD, KC_LALT, MO(_RL), KC_SPC,                   KC_RSFT, MO(_RL), KC_RALT,  KC_RCMD, KC_APP,  KC_RCTL
    ),
    [_RL] = LAYOUT_default(
        KC_ESC,  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                    KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_MPLY, KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  KC_INS,  KC_ENT , KC_PSCR, XXXXXXX, XXXXXXX,
                 KC_CAPS, XXXXXXX, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX,                  KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
                 KC_LSFT, XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 KC_LCTL, XXXXXXX, KC_LCMD, KC_LALT, MO(_RL), KC_SPC,                   KC_RSFT, MO(_RL), KC_RALT,  KC_RCMD, KC_APP,  KC_RCTL
    ),
    [_FL] = LAYOUT_default(
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  KC_HOME, KC_PGDN,  KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
                 KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 KC_LCTL, MO(_FL), KC_LCMD, KC_LALT, XXXXXXX, KC_SPC,                   KC_RSFT, XXXXXXX, KC_RALT,  KC_RCMD, KC_APP,  KC_RCTL
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_RL] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT)  },
    [_FL] = { ENCODER_CCW_CW(KC_BRID, KC_BRIU)  },
};
#endif
