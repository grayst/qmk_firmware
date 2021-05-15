/* Copyright 2019 MechMerlin
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

enum combos {
  SCLQUOT_MINS,
  MCOMM_LPRN,
  DOTSLSH_RPRN,
  SCLNSLSH_EXLM
};

const uint16_t PROGMEM sclquot_combo[] = {KC_SCLN, KC_QUOT, COMBO_END};
const uint16_t PROGMEM mcomm_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM dotslsh_combo[] = {KC_DOT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM sclnslsh_combo[] = {KC_SCLN, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [SCLQUOT_MINS] = COMBO(sclquot_combo, KC_MINS),
  [MCOMM_LPRN] = COMBO(mcomm_combo, KC_LPRN),
  [DOTSLSH_RPRN] = COMBO(dotslsh_combo, KC_RPRN),
  [SCLNSLSH_EXLM] = COMBO(sclnslsh_combo, KC_EXLM)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* QWERTY */
          KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_BSPC,
          KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
          LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_F13),
          KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, LT(2, KC_SPC), KC_RGUI, KC_RALT, KC_RCTL, TG(1)
    ),

    [1] = LAYOUT( /* COLEMAK-DH */
          KC_GESC, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_QUOT, KC_BSPC,
          KC_TAB, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_ENT,
          LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_F13),
          KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, LT(2, KC_SPC), KC_RGUI, KC_RALT, KC_RCTL, TG(1)
    ),

    [2] = LAYOUT( /* NUM-SYM-NAV */
        KC_SLEP, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,
        KC_TAB, KC_NO, KC_NO, KC_NO, KC_R, KC_NO, KC_UP, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
        KC_LCTL, KC_LALT, KC_LGUI, LT(3, KC_SPC), KC_TRNS, KC_RGUI, KC_NO, KC_NO, KC_NO
    ),

    [3] = LAYOUT( /* RGB-MEDIA */
        RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG,
        KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,
        KC_LSFT, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS
    )
};






