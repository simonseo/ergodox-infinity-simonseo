#include QMK_KEYBOARD_H
#include "version.h"

enum custom_layers {
    BASE,   // default layer
    SYMB,   // symbols
    KOWERTY, // Korean QWERTY
    COLEMAK_DH, // colemak mod dh
    NUMPAD,	// numpad on right
    MDIA,   // media keys and function keys
    NAV,	// mouse navigation
    QWERTY_CAPS, // caps lock
};


enum custom_keycodes {
  // RGB_SLD = SAFE_RANGE,
  PLACEHOLDER = SAFE_RANGE, // can always be here
  VRSN,
  MACRO_TEST,	
};


enum tap_dance_codes {
  LPAREN_LSHIFT_CAPSLOCK, // tap (, hold lshift, double-tap capslock
  RPAREN_RSHIFT_LAYER7, // tap ), hold rshift, double-tap layer7(QWERTY_CAPS)
  HANEN_CMD, // tap 한영, hold CMD
  HANJA_EMO, // tap 한자, double-tap Emoji
};


