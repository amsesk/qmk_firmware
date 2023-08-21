#include QMK_KEYBOARD_H
#include "print.h"
#include "amsesk.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM n_e_pipe[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM i_o_dash[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM y_scln_bspc[] = {KC_Y, KC_SCLN, COMBO_END};
const uint16_t PROGMEM a_r_esc[] = {KC_A, KC_R, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(n_e_pipe, KC_PIPE),
    COMBO(i_o_dash, KC_MINS),
    COMBO(y_scln_bspc, KC_BSPC),
    COMBO(a_r_esc, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//	[_BASE] = LAYOUT_ortho_5x12(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, FNKEY, KC_NO, NUMPAD, UPPER, KC_SPC, KC_BSPC, LOWER, KC_RSFT, LCTL(KC_D), LCTL(KC_U), LGUI(KC_D)),
	/*
	[_QWERTY] = LAYOUT_preonic_grid(
         KC_GRV    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_0      ,KC_BSPC
        ,KC_TAB    ,KC_Q      ,KC_W      ,KC_E      ,KC_R      ,KC_T      ,KC_Y      ,KC_U      ,KC_I      ,KC_O      ,KC_P      ,KC_BSLS
        ,KC_ESC    ,KC_A      ,KC_S      ,KC_D      ,KC_F      ,KC_G      ,KC_H      ,KC_J      ,KC_K      ,KC_L      ,KC_SCLN   ,KC_QUOT
        ,KC_LSFT   ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B      ,KC_N      ,KC_M      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,KC_ENT
        ,KC_LCTL   ,KC_NO     ,KC_LALT   ,MO(_NUM)  ,TD(LWRTD) ,KC_SPC    ,KC_BSPC   ,TD(RSETD)     ,KC_RSFT   ,LCTL(KC_D),LCTL(KC_U),LGUI(KC_D)
	),
	*/
    [_COLEMAK] = LAYOUT_preonic_grid(
    KC_GRV,        KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,         KC_BSPC,
    KC_TAB,  KC_Q,    MT(MOD_LGUI, KC_W),    KC_F,    LT(_ARROWS, KC_P),    KC_G,    KC_J,    KC_L,    KC_U,    MT(MOD_RGUI, KC_Y),    KC_SCLN, KC_BSPC,
    KC_ESC,  MT(MOD_LCTL, KC_A),    KC_R,    KC_S, KC_T,    KC_D,    KC_H,  KC_N,    KC_E,    KC_I,    MT(MOD_RCTL, KC_O),   KC_QUOT,

    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, KC_LCTL, KC_LALT, OSM(MOD_RSFT),  MO(_LOWER), KC_SPC, KC_NO, MO(_RAISE), OSM(MOD_RSFT), KC_NO, KC_NO, KC_RCTL
    //KC_LCTL, KC_LCTL, KC_LALT, TD(SFTCAPS),  TD(LWRTD), KC_SPC, KC_NO, TD(RSETD),TD(SFTCAPS), KC_NO, KC_NO, KC_RCTL
    ),

    [_BEAKL8] = LAYOUT_preonic_grid(
            KC_GRV,        KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,         KC_BSPC,
            KC_TAB,        KC_Q,        KC_Y,        KC_O,        KC_U,        KC_G,        KC_V,        KC_C,        KC_R,        KC_F,        KC_Z,         KC_DEL,
            KC_ESC,        KC_K,        KC_H,  MT(MOD_LCTL,KC_E), MT(MOD_LSFT,KC_A),  KC_D, KC_DOT, MT(MOD_RSFT,KC_S),MT(MOD_RCTL, KC_T), KC_N, KC_B,         KC_QUOT,
            KC_LSFT,       KC_J,        KC_SLSH,     KC_COMM,     KC_I,        KC_QUOT,     KC_W,        KC_M,        KC_L,        KC_P,        KC_X,         KC_ENT,
            KC_LCTL,       KC_LCTL,     KC_LALT,    KC_LGUI,      TD(LWRTD),   KC_SPC,      KC_BSPC,     KC_RSFT, KC_LEFT,     KC_DOWN,     KC_UP,        KC_RGHT
	    ),
//	[2] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_DEL, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_ENT, BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[_LOWER] = LAYOUT_preonic_grid(
         KC_TILD   ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_BSPC,
    KC_GRV,  _______,   _______,   _______,  XXXXXXX, _______,   _______,    KC_7,    KC_8,    KC_9,  KC_COLN, _______,
    _______,  PATHHOME, PATHBACK,  KC_LPRN,    KC_RPRN,    KC_DOWN,   KC_UP,      KC_4,    KC_5,    KC_6,   KC_COLN, KC_DQUO,
    _______, _______,  _______,   KC_LBRC,  KC_RBRC ,  _______,  _______,         KC_1,    KC_2,    KC_3,   _______, KC_BSLS,
    MO(_ADJUST), TG(_BEAKL8), _______, _______, _______, KC_UNDS, KC_UNDS,        KC_0,    KC_0,    _______,_______, QK_BOOT
),

	[_RAISE] = LAYOUT_preonic_grid(
         KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO     ,KC_NO    ,KC_NO,
    XXXXXXX, KC_TILD, KC_GRV, KC_ASTR,   KC_AMPR, KC_AMPR,  XXXXXXX, KC_LBRC, KC_RBRC,   KC_LPRN, KC_RPRN, _______,
    KC_DEL,  KC_EQL,  KC_CIRC, KC_PERC, KC_DLR, KC_DOWN,  _______, KC_PLUS, KC_GRV, KC_LCBR, KC_RCBR, _______,
    _______, XXXXXXX, KC_HASH, KC_AT,   KC_EXLM,  XXXXXXX,  KC_GRV,  KC_PERC, KC_LT , KC_GT, KC_BSLS, _______,
    _______, _______, _______, _______, XXXXXXX, KC_LSFT,KC_NO, _______, _______, _______, _______, _______
        ),
    [_TILWM] = LAYOUT_preonic_grid(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, _______, _______, _______, _______, _______ ,KC_H, KC_J,  KC_K,  KC_L, KC_SCLN, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, KC_ENT
    ),

    [_ARROWS] = LAYOUT_preonic_grid(
        XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ,KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT, KC_SCLN, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX
    ),

 	//	[4] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LT, KC_GT, KC_PGUP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(5), KCKC_NOKC_NO, KC_NO, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[_ADJUST] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, QK_BOOT, DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_NO, KC_NO, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MU_ON, MU_OFF, MI_ON, MI_OFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
//	[6] = LAYOUT_ortho_5x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[_NUM] = LAYOUT_preonic_grid(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PMNS, KC_PLUS, KC_EQL, KC_NO, KC_BSPC, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_DOT, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_COMM, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_SPC, KC_0, KC_0, KC_NO, KC_NO, KC_NO),

    [_FN] = LAYOUT_preonic_grid(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_NO, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

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
