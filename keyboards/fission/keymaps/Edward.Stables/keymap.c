#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _SYMBOL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
   KC_Q,      KC_W,         KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,\
   KC_TAB,    KC_A,         KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,\
   KC_LCTRL,  KC_Z,         KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,\
              LT(_SYMBOL,KC_ESC), KC_LGUI,   KC_SPC,    KC_ENTER,  KC_RSHIFT, KC_BSPACE\
),
[_SYMBOL] = LAYOUT(
   KC_Q,      KC_W,         KC_E,      KC_R,      KC_T,      KC_LBRC,   KC_RBRC,   KC_QUOT, KC_DQUO, KC_NO,\
   KC_TILD,   KC_EXLM,      KC_AT,     KC_HASH,   KC_DLR,    KC_LCBR,   KC_RCBR,   KC_COLN, KC_SCLN, KC_NO,\
   KC_LCTRL,  KC_PERC,      KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_PIPE, KC_SLSH, KC_BSLS,\
              KC_NO,        KC_LGUI,   KC_SPC,    KC_ENTER,  KC_RSHIFT, KC_BSPACE\
) 

};

