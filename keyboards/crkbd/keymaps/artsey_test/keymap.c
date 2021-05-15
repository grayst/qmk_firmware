/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "artsey.h"
#include "keymap_combo.h"
#include "artsey.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [A_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_BASE_S,    A_BASE_T,    A_BASE_R,    A_BASE_A,    KC_NO,                         KC_NO,    A_BASE_A,    A_BASE_R,    A_BASE_T,   A_BASE_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_BASE_O,    A_BASE_I,    A_BASE_Y,    A_BASE_E,    KC_NO,                         KC_NO,    A_BASE_E,    A_BASE_Y,    A_BASE_I, A_BASE_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

  [A_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_NUM_S,    A_NUM_T,    A_NUM_R,    A_NUM_A,    KC_NO,                         KC_NO,    A_NUM_A,    A_NUM_R,    A_NUM_T,   A_NUM_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_NUM_O,    A_NUM_I,    A_NUM_Y,    A_NUM_E,    KC_NO,                         KC_NO,    A_NUM_E,    A_NUM_Y,    A_NUM_I, A_NUM_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

    [A_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_NAV_S,    A_NAV_T,    A_NAV_R,    A_NAV_A,    KC_NO,                         KC_NO,    A_NAV_A,    A_NAV_R,    A_NAV_T,   A_NAV_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_NAV_O,    A_NAV_I,    A_NAV_Y,    A_NAV_E,    KC_NO,                         KC_NO,    A_NAV_E,    A_NAV_Y,    A_NAV_I, A_NAV_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

  [A_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_SYM_S,    A_SYM_T,    A_SYM_R,    A_SYM_A,    KC_NO,                         KC_NO,    A_SYM_A,    A_SYM_R,    A_SYM_T,   A_SYM_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_SYM_O,    A_SYM_I,    A_SYM_Y,    A_SYM_E,    KC_NO,                         KC_NO,    A_SYM_E,    A_SYM_Y,    A_SYM_I, A_SYM_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

    [A_BRAC] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_BRAC_S,    A_BRAC_T,    A_BRAC_R,    A_BRAC_A,    KC_NO,                         KC_NO,    A_BRAC_A,    A_BRAC_R,    A_BRAC_T,   A_BRAC_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_BRAC_O,    A_BRAC_I,    A_BRAC_Y,    A_BRAC_E,    KC_NO,                         KC_NO,    A_BRAC_E,    A_BRAC_Y,    A_BRAC_I, A_BRAC_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

    [A_MOU] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_MOU_S,    A_MOU_T,    A_MOU_R,    A_MOU_A,    KC_NO,                         KC_NO,    A_MOU_A,    A_MOU_R,    A_MOU_T,   A_MOU_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_MOU_O,    A_MOU_I,    A_MOU_Y,    A_MOU_E,    KC_NO,                         KC_NO,    A_MOU_E,    A_MOU_Y,    A_MOU_I, A_MOU_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),

    [A_CUSTOM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    A_CUSTOM_S,    A_CUSTOM_T,    A_CUSTOM_R,    A_CUSTOM_A,    KC_NO,                         KC_NO,    A_CUSTOM_A,    A_CUSTOM_R,    A_CUSTOM_T,   A_CUSTOM_S,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    A_CUSTOM_O,    A_CUSTOM_I,    A_CUSTOM_Y,    A_CUSTOM_E,    KC_NO,                         KC_NO,    A_CUSTOM_E,    A_CUSTOM_Y,    A_CUSTOM_I, A_CUSTOM_O, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,    KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,   KC_NO,  KC_NO,     KC_NO,   KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

// #define L_BASE 0
// #define L_LOWER 2
// #define L_RAISE 4
// #define L_ADJUST 8
/*
void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}

char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
*/
