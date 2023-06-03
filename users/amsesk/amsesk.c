#include "amsesk.h"

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [LWRTD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished, x_reset),
    [RSETD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSETD_finished, RSETD_reset),
    [QUOT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_finished, QUOT_reset),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(QUOT):
            return 150;
        case TD(LWRTD):
            return TAPPING_TERM;
        case TD(RSETD):
            return TAPPING_TERM;
        default:
            return TAPPING_TERM;
    }
}

int cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->pressed) {
            return SINGLE_HOLD;
        } else {
            return SINGLE_TAP;
        }
    } else if (state->count == 2) {
        if (!state->pressed) {
           return DOUBLE_TAP;
        } else {
            return 11;
        }
    } else {
        return 10;
    }
}

//instanalize an instance of 'tap' for the 'x' tap dance.
static tap xtap_state = {
  .is_press_action = true,
  .state = 0
};

void x_finished (tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            print("SINGLE_TAP, x_finished\n");
            set_oneshot_layer(_LOWER, ONESHOT_START);
            clear_oneshot_layer_state(ONESHOT_PRESSED);
            break;
            //layer_on(_UPPER);
            //set_oneshot_layer(_UPPER, ONESHOT_START);
            //waitingPostTap = true;
            //break;
        case SINGLE_HOLD:
            print("HOLD_TAP, x_finished\n");
            layer_on(_LOWER);
            break;
        case DOUBLE_TAP:
            register_code(KC_LSFT);
            register_code(KC_6);
            break;
    }
}
void x_reset (tap_dance_state_t *state, void *user_data) {
    uprintf("xtap_state.state going into x_reset: %d\n", xtap_state.state);
    switch (xtap_state.state) {
        case SINGLE_TAP:
            print("SINGLE_TAP, x_reset\n");
            break;
        case SINGLE_HOLD:
            print("SINGLE_HOLD, x_reset\n");
            layer_off(_LOWER);
            break;
        case DOUBLE_TAP:
            unregister_code(KC_6);
            unregister_code(KC_LSFT);
            break;
    }
    xtap_state.state = 0;
}

void RSETD_finished (tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            layer_on(_RAISE);
            break;
        case SINGLE_HOLD:
            layer_on(_RAISE);
            break;
        case DOUBLE_TAP:
            register_code(KC_LSFT);
            register_code(KC_4);
            break;
    }
}
void RSETD_reset (tap_dance_state_t *state, void *user_data) {
    uprintf("xtap_state.state going into x_reset: %d\n", xtap_state.state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            layer_off(_RAISE);
            break;
        case SINGLE_HOLD:
            layer_off(_RAISE);
            break;
        case DOUBLE_TAP:
            unregister_code(KC_4);
            unregister_code(KC_LSFT);
            break;
    }
    xtap_state.state = 0;
}

void QUOT_finished (tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            register_code(KC_QUOT);
            break;
        case SINGLE_HOLD:
            register_code(KC_LSFT);
            register_code(KC_QUOT);
            break;
        case DOUBLE_TAP:
            register_code(KC_LSFT);
            register_code(KC_QUOT);
            break;
    }
}
void QUOT_reset (tap_dance_state_t *state, void *user_data) {
    uprintf("xtap_state.state going into x_reset: %d\n", xtap_state.state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            unregister_code(KC_QUOT);
            break;
        case SINGLE_HOLD:
            unregister_code(KC_QUOT);
            unregister_code(KC_LSFT);
            break;
        case DOUBLE_TAP:
            unregister_code(KC_QUOT);
            unregister_code(KC_LSFT);
            break;
    }
    xtap_state.state = 0;
}
/*
void check_disable_oneshot(uint16_t keycode) {
    switch (keycode) {
        case UPPER:
            break;
        case TILINGWM:
            break;
        default:
            clear_oneshot_layer_state(ONESHOT_PRESSED);
    }
}
*/

enum returnAction process_macros(uint16_t keycode, keyrecord_t *record) {
    //if (IS_LAYER_ON(_UPPER) && keysPressedAfterUPPER == 1) {
    //  clear_oneshot_layer_state(ONESHOT_PRESSED);
     //   keysPressedAfterUPPER = 0;
    //}
    //uprintf("xtap_state.state going into process_macros: %d | Oneshot layer active: %d\n", xtap_state.state, is_oneshot_layer_active());
    /* To experiment with manual oneshot layering
    if (IS_LAYER_ON(_LOWER) && !holdOneShot) {
        clear_oneshot_layer_state(ONESHOT_PRESSED);
        layer_off(_LOWER);
    }
    */
	switch (keycode) {
        case PATHBACK:
			if(record->event.pressed) {
				SEND_STRING("../");
			}
            break;
		/*
        case NUMPAD:
			if (record->event.pressed) {
				PLAY_SONG(NUMPAD_ON_TONE);
				persistent_default_layer_set(1UL<<_NUMPAD);
			}
			break;
		*/
        /*
        case BASE:
			if (record->event.pressed) {
				PLAY_SONG(BASE_ON_TONE);
				persistent_default_layer_set(1UL<<_BASE);
			}
			break;
            */
            /*
		case COLEMAK:
			if (record->event.pressed) {
				PLAY_SONG(COLEMAK_ON_TONE);
				persistent_default_layer_set(1UL<<_COLEMAK);
			}
			break;
            */
        /*
		case COPY:
			if (record->event.pressed) {
				register_code(KC_LCTL);
				register_code(KC_C);
			} else {
				unregister_code(KC_LCTL);
				unregister_code(KC_C);
      			}

			break;
        */
        /*
        case LOWER:
            if (record->event.pressed) {
                if (IS_LAYER_ON(_LOWER)) {
                    layer_off(_LOWER);
                    holdOneShot = false;
	        } else {
                    set_oneshot_layer(_LOWER, ONESHOT_START);
	                clear_oneshot_layer_state(ONESHOT_PRESSED);
                    holdOneShot = true;
                }
            }
        */
        /*
		case LOWER:
			if (record->event.pressed) {
				layer_on(_LOWER);
			} else {
				layer_off(_LOWER);
      			}

			break;
        */
        /*
		case UPPER:
			if (record->event.pressed) {
                if (IS_LAYER_ON(_UPPER)) {
				    clear_oneshot_layer_state(ONESHOT_PRESSED);
			    } else {
                    set_oneshot_layer(_UPPER, ONESHOT_START);
                }
            }
            return processRecordReturnFalse;
			//break;
        */
		case TILWM:
			if (record->event.pressed) {
                if (IS_LAYER_ON(_LOWER)) {
                    //clear_oneshot_layer_state(ONESHOT_PRESSED);
                    layer_off(_LOWER);
                }
				layer_on(_TILWM);
                register_code(KC_LGUI);
			} else {
				layer_off(_TILWM);
                unregister_code(KC_LGUI);
            }

			break;

        /*
		case FNKEY:
			if (record->event.pressed) {
				layer_on(_FN);
			} else {
				layer_off(_FN);
      			}

			break;

        case BOOT:
			if (record->event.pressed) {
				layer_on(_ADJUST);
			} else {
				layer_off(_ADJUST);
      			}
			break;
		case TIDYPIPE:
			if(record->event.pressed) {
				SEND_STRING("%>%\n");
			}
			break;
        */
		case PATHHOME:
			if(record->event.pressed) {
				SEND_STRING("~/");
			}
			break;

        default:
            //holdOneShot = false;
            return processRecordReturnTrue;
            break;
		/*
        default:
            return processRecordReturnTrue;
			break;
            */

	}
	return processRecordReturnFalse;
};

