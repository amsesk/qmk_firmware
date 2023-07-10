/* Copyright 2020 tominabox1
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
#include "amsesk.h"

const uint16_t PROGMEM p_bspc_pipe[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM l_scln_dash[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM o_p_bspc[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM a_s_esc[] = {KC_A, KC_S, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(p_bspc_pipe, KC_PIPE),
    COMBO(l_scln_dash, KC_MINS),
    COMBO(o_p_bspc, KC_BSPC),
    COMBO(a_s_esc, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | BLTog| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12_1x2uC(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_LCTL, KC_LCTL, KC_LALT, MO(_NUM),TD(LWRTD),KC_SPC,TD(RSETD),KC_TAB, XXXXXXX, XXXXXXX, KC_RCTL
),

[_COLEMAK] = LAYOUT_ortho_4x12_1x2uC(
    _______,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,_______,
    _______,  KC_A,    KC_R,    KC_S,    MT(MOD_LSFT, KC_T),    KC_D,    KC_H,    MT(MOD_LSFT, KC_N),    KC_E,    KC_I,    KC_O,   _______,
    XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_TILWM] = LAYOUT_ortho_4x12_1x2uC(
    _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX
),
/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12_1x2uC(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_DEL,  PATHHOME, PATHBACK,   _______,   _______,   _______,   KC_LEFT,   KC_DOWN,    KC_UP,    KC_RGHT, KC_COLN, KC_PIPE,
    _______, _______,  _______,   _______,   _______,  _______,  _______,  _______, _______, _______, _______,  _______,
    MO(_ADJUST), TG(_COLEMAK), _______, _______, _______, KC_UNDS, TILWM, _______,    KC_VOLD, KC_VOLU, QK_BOOT
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12_1x2uC(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL,  KC_EQL,  KC_PLUS, XXXXXXX, _______, KC_F5,   KC_F6,   KC_PIPE, KC_MINS,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PERC, KC_LT , KC_GT, _______, _______,
    _______, _______, _______, _______, XXXXXXX, _______,          _______, _______, _______, _______, _______
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12_1x2uC(
    _______, _______, DB_TOGG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, _______, _______, RGB_M_P, _______, _______, _______,  _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
),


[_NUM] = LAYOUT_ortho_4x12_1x2uC(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_7   , KC_8   , KC_9    , XXXXXXX, KC_BSPC,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_4   , KC_5   , KC_6    , XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_1   , KC_2   , KC_3    , XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,           KC_0   , KC_0   , XXXXXXX , XXXXXXX, XXXXXXX
)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    enum returnAction what_do;
    what_do = process_macros(keycode, record);

    //if (record->event.pressed && is_oneshot_layer_active())
    //  clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);

    if (what_do == processRecordReturnTrue) {
        return true;
    } else {
        return false;
    }
}
