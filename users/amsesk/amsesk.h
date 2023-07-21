#pragma once
#include QMK_KEYBOARD_H

/*
//Layer names
#define _QWERTY 0
#define _UPPER 1
#define _TILINGWM 2
#define _BOOT 3
#define _NUMPAD 4
#define _FN 5
#define _LOWER 6
*/

enum layers {
    _QWERTY,
    _COLEMAK,
    _COLEMAK_SPL,
    _TILWM,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUM,
    _FN
};

enum other_keycodes {
    QWERTY = SAFE_RANGE,
    //LOWER,
    //RAISE,
    TILWM,
	//BOOT,
	//NUMPAD,
    //FNKEY,
    //TIDYPIPE,
	PATHBACK,
	PATHHOME
};

typedef struct {
  bool is_press_action;
  int state;
} tap;

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
  DOUBLE_HOLD = 4//,
  //DOUBLE_SINGLE_TAP = 5, //send two single taps
  //TRIPLE_TAP = 6,
  //TRIPLE_HOLD = 7
};

int cur_dance (tap_dance_state_t *state);

//for the x tap dance. Put it here so it can be used in any keymap
void x_finished (tap_dance_state_t *state, void *user_data);
void x_reset (tap_dance_state_t *state, void *user_data);

void RSETD_finished (tap_dance_state_t *state, void *user_data);
void RSETD_reset (tap_dance_state_t *state, void *user_data);

void QUOT_finished (tap_dance_state_t *state, void *user_data);
void QUOT_reset (tap_dance_state_t *state, void *user_data);
// Tap Dance declarations
enum {
    LWRTD,
    RSETD,
    QUOT,
};

enum returnAction {processRecordReturnTrue, processRecordReturnFalse};

//bool process_record_user(uint16_t keycode, keyrecord_t *record);
enum returnAction process_macros(uint16_t keycode, keyrecord_t *record);
