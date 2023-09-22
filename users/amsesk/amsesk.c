#include "amsesk.h"

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case TD(SFTL):
        case TD(SFTR):
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [LWRTD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished, x_reset),
    [RSETD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSETD_finished, RSETD_reset),
    [SFTL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, osmshift_lower_finished, osmshift_lower_reset),
    [SFTR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, osmshift_raise_finished, osmshift_raise_reset),
    [QUOT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_finished, QUOT_reset),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_T):
            return TAPPING_TERM;
        case RSFT_T(KC_N):
            return TAPPING_TERM;
        case LCTL_T(KC_A):
            return  250;
        case RCTL_T(KC_O):
            return 250;
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
            return DOUBLE_HOLD;
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

void osmshift_lower_finished (tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            print("SINGLE_TAP, x_finished\n");
            set_oneshot_mods(MOD_BIT(KC_LSFT));
            //clear_oneshot_layer_state(ONESHOT_PRESSED);
            //set_oneshot_layer(_LOWER, ONESHOT_START);
            //clear_oneshot_layer_state(ONESHOT_PRESSED);
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
            //register_code(KC_CAPS);
            break;
    }
}
void osmshift_lower_reset (tap_dance_state_t *state, void *user_data) {
    uprintf("xtap_state.state going into x_reset: %d\n", xtap_state.state);
    switch (xtap_state.state) {
        case SINGLE_TAP:
            print("SINGLE_TAP, x_reset\n");
            //clear_oneshot_mods();
            break;
        case SINGLE_HOLD:
            print("SINGLE_HOLD, x_reset\n");
            layer_off(_LOWER);
            break;
        case DOUBLE_TAP:
            //unregister_code(KC_CAPS);
            break;
    }
    xtap_state.state = 0;
}
void osmshift_raise_finished (tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            print("SINGLE_TAP, x_finished\n");
            set_oneshot_mods(MOD_BIT(KC_RSFT));
            //clear_oneshot_layer_state(ONESHOT_PRESSED);
            //set_oneshot_layer(_LOWER, ONESHOT_START);
            //clear_oneshot_layer_state(ONESHOT_PRESSED);
            break;
            //layer_on(_UPPER);
            //set_oneshot_layer(_UPPER, ONESHOT_START);
            //waitingPostTap = true;
            //break;
        case SINGLE_HOLD:
            print("HOLD_TAP, x_finished\n");
            layer_on(_RAISE);
            break;
        case DOUBLE_TAP:
            //register_code(KC_CAPS);
            break;
    }
}
void osmshift_raise_reset (tap_dance_state_t *state, void *user_data) {
    uprintf("xtap_state.state going into x_reset: %d\n", xtap_state.state);
    switch (xtap_state.state) {
        case SINGLE_TAP:
            print("SINGLE_TAP, x_reset\n");
            //clear_oneshot_mods();
            break;
        case SINGLE_HOLD:
            print("SINGLE_HOLD, x_reset\n");
            layer_off(_RAISE);
            break;
        case DOUBLE_TAP:
            //unregister_code(KC_CAPS);
            break;
    }
    xtap_state.state = 0;
}

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
            break;
        case DOUBLE_HOLD:
            register_code(KC_LGUI);
            layer_on(_TILWM);
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
            layer_clear();
            break;
        case DOUBLE_TAP:
            break;
        case DOUBLE_HOLD:
            unregister_code(KC_LGUI);
            layer_off(_TILWM);
            break;
    }
    xtap_state.state = 0;
}

void RSETD_finished (tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            set_oneshot_layer(_RAISE, ONESHOT_START);
            clear_oneshot_layer_state(ONESHOT_PRESSED);
            break;
        case SINGLE_HOLD:
            layer_on(_RAISE);
            break;
        case DOUBLE_TAP:
            break;
        case DOUBLE_HOLD:
            break;
    }
}
void RSETD_reset (tap_dance_state_t *state, void *user_data) {
    uprintf("xtap_state.state going into x_reset: %d\n", xtap_state.state);
    switch (xtap_state.state) {
        case SINGLE_TAP: //instanalize an instance of 'tap' for the 'x' tap dance.
            break;
        case SINGLE_HOLD:
            layer_off(_RAISE);
            break;
        case DOUBLE_TAP:
            break;
        case DOUBLE_HOLD:
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
    /*
    const uint8_t osmods = get_oneshot_mods();
    if ((osmods & MOD_BIT(KC_LSFT)) != MOD_BIT(KC_LSFT) && xtap_state.state == 0) {
        uprintf("clearing layers with xtap_state.state = %d", xtap_state.state);
        layer_clear();
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

