#include QMK_KEYBOARD_H
#include "print.h"
#include "amsesk.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM p_bspc_pipe[] = {KC_P, KC_BSLS, COMBO_END};
const uint16_t PROGMEM coln_quot_dash[] = {KC_SCLN, KC_QUOT, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(p_bspc_pipe, KC_PIPE),
    COMBO(coln_quot_dash, KC_MINS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//	[_BASE] = LAYOUT_ortho_5x12(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, FNKEY, KC_NO, NUMPAD, UPPER, KC_SPC, KC_BSPC, LOWER, KC_RSFT, LCTL(KC_D), LCTL(KC_U), LGUI(KC_D)),
	[_QWERTY] = LAYOUT_preonic_grid(
         KC_GRV    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_0      ,KC_BSPC
        ,KC_TAB    ,KC_Q      ,KC_W      ,KC_E      ,KC_R      ,KC_T      ,KC_Y      ,KC_U      ,KC_I      ,KC_O      ,KC_P      ,KC_BSLS
        ,KC_ESC    ,KC_A      ,KC_S      ,KC_D      ,KC_F      ,KC_G      ,KC_H      ,KC_J      ,KC_K      ,KC_L      ,KC_SCLN   ,KC_QUOT
        ,KC_LSFT   ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B      ,KC_N      ,KC_M      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,KC_ENT
        ,KC_LCTL   ,KC_NO     ,KC_LALT   ,MO(_NUM)    ,TD(LWRTD) ,KC_SPC    ,KC_BSPC   ,TD(RSETD)     ,KC_RSFT   ,LCTL(KC_D),LCTL(KC_U),LGUI(KC_D)
	),
//	[2] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_DEL, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_ENT, BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[_LOWER] = LAYOUT_preonic_grid(
         KC_TILD   ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_BSPC
        ,KC_DEL    ,PATHHOME  ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_PIPE
        ,KC_ESC    ,PATHBACK  ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_LEFT   ,KC_DOWN   ,KC_UP     ,KC_RGHT   ,KC_COLN   ,KC_DQUO
        ,KC_LSFT   ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_PERC   ,KC_LT     ,KC_GT     ,KC_QUES   ,KC_NO
        ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_UNDS   ,MO(_TILWM)  ,KC_NO     ,KC_NO     ,KC_NO     ,MO(_ADJUST)
        ),

    [_TILWM] = LAYOUT_preonic_grid(
         KC_NO     ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_NO     ,KC_NO
        ,KC_TAB    ,KC_Q      ,KC_NO     ,KC_NO     ,KC_R      ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_O      ,KC_P      ,KC_NO
        ,KC_ESC    ,KC_NO     ,KC_S      ,KC_NO     ,KC_NO     ,KC_NO     ,KC_H      ,KC_J      ,KC_K      ,KC_L      ,KC_SCLN   ,KC_NO
        ,KC_LSFT   ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B      ,KC_N      ,KC_M      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,KC_ENT
        ,KC_LCTL   ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_SPC    ,KC_SPC    ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO
        ),

 	//	[4] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LT, KC_GT, KC_PGUP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(5), KCKC_NOKC_NO, KC_NO, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[_ADJUST] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, QK_BOOT, DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_NO, KC_NO, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MU_ON, MU_OFF, MI_ON, MI_OFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
//	[6] = LAYOUT_ortho_5x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[_NUM] = LAYOUT_preonic_grid(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PMNS, KC_PLUS, KC_EQL, KC_NO, KC_BSPC, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_DOT, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_COMM, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_SPC, KC_0, KC_0, KC_NO, KC_NO, KC_NO),
    //	[_COLEMAK] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_DEL, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, BASE, KC_RGHT),

    [_FN] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

	[_RAISE] = LAYOUT_preonic_grid(
         KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO    ,KC_NO
        ,KC_GRV    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_0     ,KC_BSPC
        ,KC_NO     ,KC_PLUS   ,KC_LCBR   ,KC_LBRC   ,KC_LPRN   ,KC_NO     ,KC_NO     ,KC_RPRN   ,KC_RBRC   ,KC_RCBR   ,KC_EQL   ,KC_DQUO
        ,KC_LSFT   ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO    ,KC_NO
        ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO    ,KC_NO
        )
//    [_LOWER] = LAYOUT_ortho_5x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_EQL, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

//bool waitingPostTap = false;
//float ALT_TONE[][2] = {{NOTE_E4, 10}};
//float NUMPAD_ON_TONE[][2] = {{NOTE_G6, 10}};
//float BASE_ON_TONE[][2] = {{NOTE_C5, 10}};
//float COLEMAK_ON_TONE[][2] = {{NOTE_D4, 20}};

/*
void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
*/

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

//bool holdOneShot = false;
