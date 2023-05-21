/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once

#undef USB_SUSPEND_WAKEUP_DELAY
#define USB_SUSPEND_WAKEUP_DELAY 500 // to fix keyboard falling asleep with computer
#define EE_HANDS
#define SPLIT_LAYER_STATE_ENABLE

// #define SPLIT_KEYBOARD
// #define MASTER_LEFT // You can set the handedness at compile time. This is done by adding this. If neither are defined, the handedness defaults to MASTER_LEFT.
// #define MASTER_RIGHT // should I turn this on when flashing the right side?

#undef TAPPING_TERM
#define TAPPING_TERM 140 // default tapping term for modifier keys

// Start ORYX Options
// #define ORYX_CONFIGURATOR
// #define IGNORE_MOD_TAP_INTERRUPT
// #define USB_SUSPEND_WAKEUP_DELAY 0
// #define CAPS_LOCK_STATUS
// #define FIRMWARE_VERSION u8"3oxxB/QDXbp"
// #define RAW_USAGE_PAGE 0xFF60
// #define RAW_USAGE_ID 0x61
// End ORYX Options


// Apple Fn options
// see https://usb-ids.gowdy.us/read/UD/05ac for list of PIDs
#undef VENDOR_ID
#define VENDOR_ID 0x05AC
#undef PRODUCT_ID
#define PRODUCT_ID 0x0267
