/* Copyright 2020 Yiancar
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* CMD60 - QWERTY */
      KC_ESC,    KC_9,    KC_0,    KC_L, \
      KC_6,      KC_7,    KC_8,    KC_R, \
      KC_2,      KC_3,    KC_4,    KC_5, \
      KC_Q,      KC_W,    KC_E,    KC_1, \
      KC_A,      KC_S,    KC_D,    KC_ENT, \
      KC_LSFT,   KC_SLEP,    KC_MUTE,  KC_SPC \
  ),  //KC_VOLD, KC_VOLU
  [1] = LAYOUT( /* CMD60 - GameMode */
      KC_ESC,  KC_1,    KC_2,    KC_3, \
      KC_4,    KC_5,    KC_6,    KC_7, \
      KC_8,    KC_9,    KC_0,    KC_MINS, \
      KC_Q,    KC_W,    KC_E,    KC_R, \
      KC_Y,    KC_U,    KC_I,    KC_O, \
      KC_A,    KC_S,    KC_D,    KC_F \
  ),
  [2] = LAYOUT( /* CMD60 - Arrows */
      KC_ESC,  KC_1,    KC_2,    KC_3, \
      KC_4,    KC_5,    KC_6,    KC_7, \
      KC_8,    KC_9,    KC_0,    KC_MINS, \
      KC_Q,    KC_W,    KC_E,    KC_R, \
      KC_Y,    KC_U,    KC_I,    KC_O, \
      KC_A,    KC_S,    KC_D,    KC_F \
  ),
  [3] = LAYOUT( /* CMD60 - Functions */
      KC_ESC,  KC_1,    KC_2,    KC_3, \
      KC_4,    KC_5,    KC_6,    KC_7, \
      KC_8,    KC_9,    KC_0,    KC_MINS, \
      KC_Q,    KC_W,    KC_E,    KC_R, \
      KC_Y,    KC_U,    KC_I,    KC_O, \
      KC_A,    KC_S,    KC_D,    KC_F \
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
//#ifdef CONSOLE_ENABLE

#if VIA_ENABLE
    uprintf("VIA - KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
//#endif
  return true;
}
