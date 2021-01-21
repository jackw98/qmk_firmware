/* Copyright 2021 jackw98
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "joystick.h"




// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        JS_BUTTON0, JS_BUTTON1, JS_BUTTON2, JS_BUTTON3, JS_BUTTON4, JS_BUTTON13, JS_BUTTON14)
};


void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            joystick_status.buttons[(JS_BUTTON5 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON5 % 8);
            //joystick_status.status = JS_UPDATED;
            send_joystick_packet(&joystick_status);
            _delay_ms(100);
            joystick_status.buttons[(JS_BUTTON5 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON5 % 8));
            send_joystick_packet(&joystick_status);

        } else {
            joystick_status.buttons[(JS_BUTTON6 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON6 % 8);
            //joystick_status.status = JS_UPDATED;
            send_joystick_packet(&joystick_status);
            _delay_ms(100);
            joystick_status.buttons[(JS_BUTTON6 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON6 % 8));
            send_joystick_packet(&joystick_status);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            joystick_status.buttons[(JS_BUTTON7 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON7 % 8);
            //joystick_status.status = JS_UPDATED;
            send_joystick_packet(&joystick_status);
            _delay_ms(100);
            joystick_status.buttons[(JS_BUTTON7 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON7 % 8));
            send_joystick_packet(&joystick_status);

        } else {
            joystick_status.buttons[(JS_BUTTON8 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON8 % 8);
            //joystick_status.status = JS_UPDATED;
            send_joystick_packet(&joystick_status);
            _delay_ms(100);
            joystick_status.buttons[(JS_BUTTON8 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON8 % 8));
            send_joystick_packet(&joystick_status);
        }
    } 
}


void dip_switch_update_user(uint8_t index, bool active) { 
    switch (index) {
        case 0:
            if(active) {
                joystick_status.buttons[(JS_BUTTON9 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON9 % 8);
            } else {
                joystick_status.buttons[(JS_BUTTON9 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON9 % 8));
                }
            break;
        case 1:
            if(active) {
                joystick_status.buttons[(JS_BUTTON10 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON10 % 8);
            } else {
                joystick_status.buttons[(JS_BUTTON10 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON10 % 8));
                }
            break;
        case 2:
            if(active) {
                joystick_status.buttons[(JS_BUTTON11 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON11 % 8);
            } else {
                joystick_status.buttons[(JS_BUTTON11 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON11 % 8));
                }
            break;
        case 3:
            if(active) {
                joystick_status.buttons[(JS_BUTTON12 - JS_BUTTON0) / 8] |= 1 << (JS_BUTTON12 % 8);
            } else {
                joystick_status.buttons[(JS_BUTTON12 - JS_BUTTON0) / 8] &= ~(1 << (JS_BUTTON12 % 8));
                }
            break;


    }

    joystick_status.status |= JS_UPDATED;
}