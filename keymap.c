#include QMK_KEYBOARD_H
#include "version.h"

#include "action_layer.h" // qmk_firmware/quantum/action_layer.h
#include "debug.h" // qmk_firmware/quantum/logging/debug.h

// layer names and custom keycode
#include "layers.h"

// #define KR_HANJEMO TD(HANJA_EMO) // Hanja + emoji
#define KR_HANJ LALT(KC_ENTER) // Hanja (한자)
// define KR_HANEN TD(HANEN_CMD) // Han ↔ Yeong (한 ↔ 영)
#define KR_HANEN LCTL(KC_SPACE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ergodox_pretty(
        KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(5),                                          TO(1),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_PLUS,                                        KC_UNDS,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
        TT(4),          KC_A,           LT(1,KC_S),     KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           LT(1,KC_L),     LT(6,KC_SCOLON),KC_ENTER,
        TD(LPAREN_LSHIFT_CAPSLOCK),KC_Z,KC_X,           KC_C,           KC_V,           KC_B,           KC_MINUS,                                       KC_EQUAL,       KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_RSPC, // TD(RPAREN_RSHIFT_LAYER7),
        OSL(5),         KC_HYPR,        KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_SLASH,
                                                                                        MT(MOD_LALT, KC_APPLICATION), KC_LGUI,        TD(HANJA_EMO),  TD(HANEN_CMD),
                                                                                                                        KC_HOME,        KC_PGUP,
                                                                                        KC_SPACE,       KC_DELETE,      KC_END,         KC_PGDOWN,      KC_UNDS,        KC_SPACE
    ),
    [SYMB] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_PIPE,
        KC_TRANSPARENT, KC_QUES,        KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,                                                                 KC_TILD,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_COLN,        KC_SLASH,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_GRAVE,       KC_QUOTE,       KC_DQUO,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [KOWERTY] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),                                          TO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RSPC,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [COLEMAK_DH] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(2),                                          TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F,           KC_P,           KC_G,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_R,           KC_S,           KC_T,           KC_D,                                                                           KC_TRANSPARENT, KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_B,           KC_K,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [NUMPAD] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(2),                                          TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT,
        KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_0,           KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [MDIA] = LAYOUT_ergodox_pretty(
        RESET,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(4),                                          TO(0),          KC_F6,          KC_F7,                    KC_F8,                KC_F9,          KC_F10,         RESET,
        DEBUG,          MACRO_TEST,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                                         KC_F12,         DT_PRNT,        DT_DOWN,                  DT_UP,                KC_TRANSPARENT, MACRO_TEST,     DEBUG,
        QK_BOOT,        VRSN,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,  KC_MEDIA_NEXT_TRACK,  KC_TRANSPARENT, VRSN,           QK_BOOT,
        QK_RBT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,        KC_AUDIO_VOL_UP,      KC_TRANSPARENT, KC_TRANSPARENT, QK_RBT,
        EEP_RST,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_BRIGHTNESS_DOWN,       KC_BRIGHTNESS_UP,     KC_TRANSPARENT, KC_TRANSPARENT, EEP_RST,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [NAV] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_UP,       KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,                                                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [QWERTY_CAPS] = LAYOUT_ergodox_pretty(
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, RSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_E),     LSFT(KC_R),     LSFT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_I),     LSFT(KC_O),     LSFT(KC_P),     KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_S),     LSFT(KC_D),     LSFT(KC_F),     LSFT(KC_G),                                                                     LSFT(KC_H),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_L),     KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_B),     LSFT(KC_N),     LSFT(KC_M), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACRO_TEST:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_CAPSLOCK) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_T));
      }
      break;

    // dynamically generate these.
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
  }

   // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
  if (debug_enable) {
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", 
      keycode, 
      record->event.key.col, 
      record->event.key.row, 
      record->event.pressed, 
      record->event.time, 
      record->tap.interrupted, 
      record->tap.count);
  }
#endif 
  return true;
}

// In QMK 18, this is included by default?
// uint32_t layer_state_set_user(uint32_t state) {
//   return state;
// };

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

// LPAREN_LSHIFT_CAPSLOCK
void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_PAREN);
        tap_code16(KC_LEFT_PAREN);
        tap_code16(KC_LEFT_PAREN);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_PAREN);
    }
}
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: tap_code16(KC_LEFT_PAREN); break;
        case SINGLE_HOLD: register_code16(KC_LSFT); break;
        case DOUBLE_TAP: tap_code16(KC_CAPS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_PAREN); register_code16(KC_LEFT_PAREN);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_HOLD: unregister_code16(KC_LSFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_PAREN); break;
    }
    dance_state[0].step = 0;
}



// RPAREN_RSHIFT_LAYER7
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT_PAREN);
        tap_code16(KC_RIGHT_PAREN);
        tap_code16(KC_RIGHT_PAREN);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT_PAREN);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT_PAREN); break;
        case SINGLE_HOLD: register_code16(KC_RSFT); break;
        case DOUBLE_TAP: layer_move(7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT_PAREN); register_code16(KC_RIGHT_PAREN);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT_PAREN); break;
        case SINGLE_HOLD: unregister_code16(KC_RSFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT_PAREN); break;
    }
    dance_state[1].step = 0;
}

// HANEN_CMD
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_SPACE));
        tap_code16(LCTL(KC_SPACE));
        tap_code16(LCTL(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_SPACE));
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_SPACE)); break;
        case SINGLE_HOLD: register_code16(KC_RGUI); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_SPACE)); register_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_SPACE)); register_code16(LCTL(KC_SPACE));
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
        case SINGLE_HOLD: unregister_code16(KC_RGUI); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
    }
    dance_state[2].step = 0;
}

// HANJA_EMO
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_ENTER));
        tap_code16(LALT(KC_ENTER));
        tap_code16(LALT(KC_ENTER));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_ENTER));
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(KC_ENTER)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(KC_SPACE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_ENTER)); register_code16(LALT(KC_ENTER));
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_ENTER)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(KC_SPACE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_ENTER)); break;
    }
    dance_state[3].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [LPAREN_LSHIFT_CAPSLOCK] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [RPAREN_RSHIFT_LAYER7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [HANEN_CMD] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [HANJA_EMO] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
