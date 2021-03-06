#include "fourteen4.h"

enum layers {
    _QWERTY = 0,
    _RAISE,
    _DOUBLE,
    _FN,
};

enum kaomoji {
    SHRUG = SAFE_RANGE,
};

#define RAISE MO(_RAISE)
#define DOUBLE MO(_DOUBLE)
#define FN MO(_FN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(\
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, \
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_BSPC, \
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_RSHIFT, KC_UP, KC_INS, \
        KC_LCTL, FN, KC_LWIN, KC_LALT, RAISE, KC_SPC, KC_SPC, RAISE, KC_RALT, KC_RCTRL, KC_APP, KC_LEFT, KC_DOWN, KC_RIGHT \
    ),
    [_RAISE] = LAYOUT(\
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_INS, \
        KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_NO, KC_ENT, KC_DEL, \
        KC_LSHIFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSHIFT, KC_UP, KC_INS, \
        KC_LCTL, FN, KC_LWIN, KC_LALT, DOUBLE, DOUBLE, DOUBLE, DOUBLE, KC_RALT, KC_RCTRL, KC_APP, KC_LEFT, KC_DOWN, KC_RIGHT \
    ),
    [_DOUBLE] = LAYOUT(\
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, \
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_DEL, \
        KC_LSHIFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, \
        KC_LCTL, FN, KC_LWIN, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_RALT, KC_RCTRL, KC_APP, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT \
    ),
    [_FN] = LAYOUT(\
        KC_ESC, KC_MUTE, KC_VOLD, KC_VOLU, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, KC_NO, \
        KC_NO, KC_NO, SHRUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
        KC_LSHIFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSHIFT, KC_PGUP, KC_INS, \
        KC_LCTL, KC_NO, KC_LWIN, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_RALT, KC_RCTRL, KC_APP, KC_HOME, KC_PGDN, KC_END  \
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case SHRUG: // ¯\_(ツ)_/¯
                if (record->event.pressed) {
                    send_unicode_string("¯\\_(ツ)_/¯");
                }
                return false; 
                break;
        }
    }
    return true;
}