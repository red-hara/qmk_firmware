// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BL = 0,
    _RL,
    _FL,
};

/*
 *                         _____                                       _____
 *                   _____| F3  |_____                           _____| F8  |_____ 
 *            ______| F2  |  3  | F4  |_____               _____| F7  |  8  | F9  |_____
 * ___________| F1  |  2  |_____|  4  | F5  |             | F6  |  7  |_____|  9  | F10 |___________
 *|     |     |  1  |_____|     |_____|  5  |             |  6  |_____|Insrt|_____|  0  | F11 | F12 |
 *| ESC |  `  |_____|     |  E  |     |_____|             |_____|     |  I  |Enter|_____|  -  |  =  |
 *|_____|_____|     |  W  |_____|  R  |     |             |     |  U  |_____|  O  |     |_____|_____|
 * / _ \|     |  Q  |_____| Del |_____|  T  |             |  Y  |_____| Up  |_____|  P  |     |     |
 *| |_| | Tab |_____|     |  D  |     |_____|             |_____|Down |  K  |Right|_____|  [  |  ]  |
 * \___/|_____|     |  S  |_____|  F  |     |             |Left |  J  |PgUp_|  L  |     |_____|_____|
 *      |     |  A  |_____|     |_____|  G  |             |  H  |PgDw_|     |End__|  ;  |     |
 *      |Caps |_____|BckSp|  C  |     |_____|_____   _____|Home_|     |  ,  |     |_____|  '  |
 *      |_____|     |  X  |_____|  V  |     |  S  | |  R  |     |  M  |_____|  .  |     |_____|
 *      |     |  Z  |_____|     |_____|  B  |  p  | |  S  |  N  |_____|     |_____|  /  |     |
 *      |LShft|_____|     |LSup |     |_____|  a  | |  h  |_____|     | RSup|     |_____|  \  |
 *      |_____|     |     |_____|LAlt |Raise|  c  | |  f  |Raise| RAlt|_____| Menu|     |_____|
 *            |LCtrl|_Fn__|     |_____|     |  e  | |  t  |     |_____|     |_____|RCtrl|
 *            |_____|                 |_____|_____| |_____|_____|                 |_____|
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT_default(
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,     KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
                 KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
                 KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                     KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                          KC_LCTL, MO(_FL), KC_LCMD, KC_LALT, MO(_RL), KC_SPC, KC_RSFT, MO(_RL), KC_RALT,  KC_RCMD, KC_APP,  KC_RCTL
    ),
    [_RL] = LAYOUT_default(
        KC_ESC,  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                    KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
                 KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  KC_INS,  KC_ENT , XXXXXXX, XXXXXXX, XXXXXXX,
                 KC_CAPS, XXXXXXX, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX,                  KC_LEFT, KC_DOWN,  KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
                 KC_LSFT, XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                          KC_LCTL, XXXXXXX, KC_LCMD, KC_LALT, MO(_RL), KC_SPC, KC_RSFT, MO(_RL), KC_RALT,  KC_RCMD, KC_APP,  KC_RCTL
    ),
    [_FL] = LAYOUT_default(
        KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  KC_HOME, KC_PGDN,  KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
                 KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                          KC_LCTL, MO(_FL), KC_LCMD, KC_LALT, XXXXXXX, KC_SPC, KC_RSFT, XXXXXXX, KC_RALT,  KC_RCMD, KC_APP,  KC_RCTL
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_RL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_FL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif
