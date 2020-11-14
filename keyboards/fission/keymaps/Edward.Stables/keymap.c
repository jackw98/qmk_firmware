#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _SYMBOL,
    _NUM,
    _WEIRD,
};

/*
   Empty layer for convenience
   KC_, KC_, KC_, KC_, KC_,    KC_, KC_, KC_, KC_, KC_,\
   KC_, KC_, KC_, KC_, KC_,    KC_, KC_, KC_, KC_, KC_,\
   KC_, KC_, KC_, KC_, KC_,    KC_, KC_, KC_, KC_, KC_,\
             KC_, KC_, KC_,    KC_, KC_, KC_\
 */

//LT(_SYMBOL,KC_ESC), LT(_WEIRD,KC_LGUI),   KC_SPC,     KC_BSPACE,    ACTION_TAP_DANCE_DOUBLE(KC_RSHIFT, LCtl(KC_A)), LCTL_T(KC_ENTER)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
   KC_Q,    KC_W,    KC_E,               KC_R,                 KC_T,       KC_Y,         KC_U,                                          KC_I,     KC_O,    KC_P,\
   KC_A,    KC_S,    KC_D,               KC_F,                 KC_G,       KC_H,         KC_J,                                          KC_K,     KC_L,    KC_SCLN,\
   KC_Z,    KC_X,    KC_C,               KC_V,                 KC_B,       KC_N,         KC_M,                                          KC_COMM,  KC_DOT,  TT(_NUM),\
                     LT(_SYMBOL,KC_ESC), LT(_WEIRD,KC_LGUI),   KC_SPC,     KC_BSPACE,    KC_RSHIFT, LCTL_T(KC_ENTER)\
),

[_SYMBOL] = LAYOUT(
   KC_TRNS,   KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_LBRC,   KC_RBRC,   KC_QUOT, KC_DQUO, KC_NO,\
   KC_TILD,   KC_EXLM,      KC_AT,     KC_HASH,   KC_DLR,    KC_LCBR,   KC_RCBR,   KC_COLN, KC_SCLN, KC_NO,\
   KC_LCTRL,  KC_PERC,      KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_PIPE, KC_SLSH, KC_BSLS,\
              KC_NO,        KC_LGUI,   KC_NO,     KC_DEL,    KC_NO,     KC_BSPACE\
),

[_NUM] = LAYOUT(
   KC_F1,  KC_F2,  KC_F3,       KC_F4, KC_F5,    KC_7,      KC_8,   KC_9, KC_MINS, KC_SLSH,\
   KC_F6,  KC_F7,  KC_F8,       KC_F9, KC_F10,   KC_4,      KC_5,   KC_6, KC_PLUS, KC_ASTR,\
   KC_F11, KC_F12, KC_NO,       KC_NO, KC_NO,    KC_1,      KC_2,   KC_3, KC_DOT,  KC_NO,\
                   TO(_QWERTY), KC_NO, KC_NO,    KC_BSPACE, KC_0,   KC_ENTER\
),

//This layer matches my personal vimrc/tmux/windows/xfce config, it's weird so don't question it
[_WEIRD] = LAYOUT(
   KC_NO, KC_NO, KC_NO,   KC_VOLD, KC_VOLU,    LCTL(LGUI(KC_LEFT)), LCTL(LGUI(KC_RGHT)), KC_NO,      KC_NO,      KC_NO,\
   KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT,    LALT(KC_H),          LALT(KC_J),          LALT(KC_K), LALT(KC_L), KC_NO,\
   KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,      LALT(KC_N),          LALT(KC_M),          KC_NO,      KC_NO,      KC_NO,\
                 KC_NO,   KC_NO,   KC_NO,      KC_NO,               KC_NO,               KC_NO\
)
};

