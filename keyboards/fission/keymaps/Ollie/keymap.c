#include QMK_KEYBOARD_H
#include "quantum.h"

#define BASE 0
#define GAME 1
#define ROW 2
#define PAD 3
#define SCUTS 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base Layer
 * ,----------------------------------.      ,-----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |      |   Y  |   U  |   I  |   O  |   P   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |   A  |   S  |   D  |   F  |   G  |      |   H  |   J  |   K  |   L  |   ;   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |   Z  |   X  |   C  |   V  |   B  |      |   N  |   M  |   ,  |   .  |   /   |
 * '-------------+------+------+------|      |------+------+------+--------------'
 *               |  PAD | SCUT |  Ent |      | RSHFT| Space| BKSP | 
 *               `--------------------'      `--------------------'
 */
[BASE] = LAYOUT(
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, \
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, \
                     MO(PAD), MO(SCUTS),KC_ENTER,     KC_LSHIFT,KC_SPC, KC_BSPACE                  \
),


/* Gaming base Layer
 * ,----------------------------------.      ,-----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |      |   Y  |   U  |   I  |   O  |   P   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |   A  |   S  |   D  |   F  |   G  |      |   H  |   J  |   K  |   L  |   ;   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |   Z  |   X  |   C  |   V  |   B  |      |   N  |   M  |   ,  |   .  |   /   |
 * '-------------+------+------+------|      |------+------+------+--------------'
 *               |  PAD | Space|  Ent |      | RSHFT| BASE | BKSP | 
 *               `--------------------'      `--------------------'
 */
[GAME] = LAYOUT(
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, \
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, \
                     MO(PAD), KC_SPC,  KC_ENTER,      KC_LSHIFT,TO(BASE),KC_BSPACE                \
),



/* Row layout of number and F keys (edit the layer moifier keys to have row rather than pad number layer)
 * ,----------------------------------.      ,-----------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |      |  F6  |  F7  |  F8  |  F9  |  F10  |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |   1  |   2  |   3  |   4  |   5  |      |   6  |   7  |   8  |   9  |   0   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |      |      |      |      |      |      |      |      |      |      |       |
 * '-------------+------+------+------|      |------+------+------+--------------'
 *               |      |      |      |      |      |  Tab |  ESC | 
 *               `--------------------'      `--------------------'
 */

[ROW] = LAYOUT(
   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  \
   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    \
   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                     KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,  KC_TAB,  KC_ESC                    \
),

/* Pad layout of number and F keys (numbers are number row keys so can type symbols using shift on right thumb from base layer)
 * ,----------------------------------.      ,-----------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |   `  |      |      |  7 & |  8 * |  9 ( |   0 ) |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |  F5  |  F6  |  F7  |  F8  | GAME |      |      |  4 $ |  5 % |  6 ^ |  ESC  |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |  F9  |  F10 |  F11 |  F12 |      |      |      |  1 ! |  2 @ |  3 # |  Ent  |
 * '-------------+------+------+------|      |------+------+------+--------------'
 *               |      |      |      |      |      |  Tab |      | 
 *               `--------------------'      `--------------------'
 */

[PAD] = LAYOUT(
   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_GRAVE,      KC_TRNS, KC_7,    KC_8,    KC_9,    KC_0,    \
   KC_F5,   KC_F6,   KC_F7,   KC_F8,   TO(GAME),       KC_TRNS, KC_4,    KC_5,    KC_6,    KC_ESC, \
   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,       KC_TRNS, KC_1,    KC_2,    KC_3,    KC_ENT, \
                     KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TAB,  KC_TRNS                    \
),

/* A layer to have a bunch of common shortcuts cos the keyboard doesn't have enough damn keys on it
 * ,----------------------------------.      ,-----------------------------------.
 * | Alt  |      |Ctl+OS|      |Ctrl+T|      |  INS |      |  Up  |   [  |   ]   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |Ctrl+A|Ctrl+S|  OS  |Ctrl+F|      |      |  DEL | Left | Down | Right|   '   |
 * |------+------+------+------+------|      |------+------+------+------+-------|
 * |Ctrl+Z|Ctrl+X|Ctrl+C|Ctrl+V|      |      |      |  -   |  =   |   \  |   /   |
 * '-------------+------+------+------|      |------+------+------+--------------'
 *               |      |      |      |      |      |  Tab |SftTab| 
 *               `--------------------'      `--------------------'
 */

[SCUTS] = LAYOUT(
   KC_LALT,    KC_TRNS, LCTL(KC_LWIN), KC_TRNS, LCTL(KC_T),       KC_INS,  KC_TRNS,       KC_UP,   KC_LBRC, KC_RBRC, \
   LCTL(KC_A), LCTL(KC_S), KC_LWIN,    LCTL(KC_F), KC_TRNS,       KC_DEL,  KC_LEFT,       KC_DOWN, KC_RIGHT,KC_QUOT, \
   LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_TRNS,       KC_TRNS, KC_MINS,       KC_EQL,  KC_BSLS, KC_SLSH, \
                           KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS, KC_TAB,        LSFT(KC_TAB)                   \
)

};

