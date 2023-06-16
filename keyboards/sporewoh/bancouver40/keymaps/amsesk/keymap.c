/*
Copyright 2022 sporewoh

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
#include "amsesk.h"

const uint16_t PROGMEM p_bspc_pipe[] = {KC_P, KC_BSLS, COMBO_END};
const uint16_t PROGMEM coln_quot_dash[] = {KC_SCLN, KC_QUOT, COMBO_END};
const uint16_t PROGMEM o_p_bspc[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM a_s_esc[] = {KC_A, KC_S, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(p_bspc_pipe, KC_PIPE),
    COMBO(coln_quot_dash, KC_MINS),
    COMBO(o_p_bspc, KC_BSPC),
    COMBO(a_s_esc, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_4x10(
    KC_Q,      KC_W,    KC_E,  KC_R,           KC_T,            KC_Y,  KC_U,              KC_I,    KC_O,    KC_P,
    KC_A,      KC_S,    KC_D,  KC_F,           KC_G,            KC_H,  KC_J,              KC_K,    KC_L,    KC_SCLN,
    MT(MOD_LSFT,KC_Z),      KC_X,    KC_C,  KC_V,           KC_B,            KC_N,  KC_M,              KC_COMM, KC_DOT,  KC_ENTER,
    KC_LCTL, KC_LGUI, KC_NO, TD(LWRTD), KC_SPACE, KC_SPACE, TD(RSETD), KC_NO,   KC_LALT, KC_ENTER),
  [_LOWER] = LAYOUT_ortho_4x10(
    KC_1,      KC_2,     KC_3,     KC_4,        KC_5,        KC_6,    KC_7,    KC_8,      KC_9,     KC_0,
    KC_EQL,  KC_NO, KC_NO, KC_PLUS, KC_NO, KC_LEFT, KC_DOWN, KC_UP,     KC_RIGHT, KC_QUOTE,
    KC_NO, KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_QUOTE,
    KC_NO,     KC_NO,    KC_NO,    KC_NO,       KC_NO,       KC_NO,   KC_NO,   KC_NO, KC_NO,    KC_NO),
  [_RAISE] = LAYOUT_ortho_4x10(
    LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),
    LSFT(KC_GRAVE), LSFT(KC_MINUS), LSFT(KC_EQUAL), LSFT(KC_NO), LSFT(KC_NO), KC_LEFT, KC_DOWN, KC_UP, KC_LBRC, KC_RBRC,
    OSM(MOD_LSFT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_QUOTE),
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT(KC_NO), KC_NO, MO(_ADJUST)),
  [_ADJUST] = LAYOUT_ortho_4x10(
    QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DELETE,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_VOLD, KC_VOLU, KC_NO, KC_NO,
    KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, MAGIC_SWAP_LCTL_LGUI, KC_NO, MAGIC_UNSWAP_LCTL_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};
