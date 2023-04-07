/*
* @Author: Simon Myunggun Seo
* @Date:   2022-07-24 00:42:27
* @Last Modified by:   Simon Seo
* @Last Modified time: 2023-03-02 04:48:05
*/
#include QMK_KEYBOARD_H
#include "layers.h"

#ifdef ST7565_ENABLE
static void render_my_logo(void) {
    static const char PROGMEM my_logo[] = {
        // Paste the code from the previous step below this line!
        // 'Hufflepuff', 128x32px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf8, 0xf8, 0xf0, 
0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x60, 0x60, 0x60, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x60, 
0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0x60, 0x60, 0x60, 0x60, 0xf8, 0xf8, 
0x00, 0xf8, 0xf8, 0x60, 0x60, 0x60, 0x60, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
0x18, 0x18, 0xd8, 0xd8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xd8, 0x18, 0x18, 0x18, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xc0, 0xc0, 0xc0, 0xc0, 0xf8, 0xf8, 0x00, 0xf8, 0xf8, 
0xc0, 0xc0, 0xc0, 0xc0, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfd, 0xbf, 
0xbf, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfe, 0xfe, 0xfc, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x08, 0x3e, 0x76, 0x63, 0x43, 0x41, 0x41, 0x41, 0x41, 0x63, 0x63, 0x7e, 0x3e, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x13, 0x93, 0x92, 0x92, 0x92, 0x92, 0x93, 0xf3, 
0xf0, 0x93, 0x93, 0x92, 0x92, 0x92, 0x93, 0x13, 0x13, 0x10, 0x10, 0x00, 0x00, 0x80, 0x80, 0x88, 
0x88, 0x88, 0x8f, 0x8f, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8f, 0x88, 0x88, 0x88, 0x88, 0x80, 
0x80, 0x00, 0x00, 0x80, 0x80, 0x8f, 0x8f, 0x88, 0x88, 0x88, 0x88, 0x8f, 0x8f, 0x80, 0x8f, 0x8f, 
0x88, 0x88, 0x88, 0x99, 0xbf, 0xbf, 0xab, 0x1b, 0x1b, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0x03, 0x01, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xfe, 0xfe, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0xf9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 
0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xc9, 0xcf, 0xcf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 0xff, 0x01, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x01, 0x80, 0x86, 0x00, 0xf6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8
    };
    st7565_write_raw_P(my_logo, sizeof(my_logo));
}

static void render_qmk_logo(void) {
    static const char qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00

    };

    st7565_write(qmk_logo, false);
    st7565_write(get_u8_str(layer_state, ' '), false);
    // st7565_write_P(PSTR((char *)layer_state), false);
    st7565_write("  Simon's  Ergodox ", false);
}

void st7565_task_user(void) {
    // set color on both keyboards
    switch (get_highest_layer(layer_state)) {
        case BASE:
            ergodox_infinity_lcd_color(65535, 0, 0); // red
            break;
        case SYMB:
            ergodox_infinity_lcd_color(1000, 1000, 8000); // blue
            break;
        case MDIA:
            ergodox_infinity_lcd_color(65535, 65535, 0); // yellow
            break;
        case NAV:
            ergodox_infinity_lcd_color(5000, 65535, 10000); // green?
            break;
        case KOWERTY:
            ergodox_infinity_lcd_color(65535, 30000, 0); // orange?
            break;
        case COLEMAK_DH:
            ergodox_infinity_lcd_color(1000, 0, 16000); // indigo?
            break;
        case NUMPAD:
            ergodox_infinity_lcd_color(20000, 1000, 40000); // violet?
            break;
        case QWERTY_CAPS:
            ergodox_infinity_lcd_color(1000, 1000, 1000); // black?
            break;
        default:
            st7565_on_user();
    }

    if (is_keyboard_master()) {
        // Host Keyboard Layer Status
        // st7565_off_user();
        st7565_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state)) {
            case BASE:
                // no need to do this again. the switch above handles both sides
                //ergodox_infinity_lcd_color(65535, 0, 0); // red
                st7565_write_P(PSTR("BASE\n"), false);
                break;
            case SYMB:
                // ergodox_infinity_lcd_color(1000, 1000, 8000); // blue
                st7565_write_P(PSTR("SYMB\n"), false);
                break;
            case MDIA:
                // ergodox_infinity_lcd_color(65535, 65535, 0); // yellow
                st7565_write_P(PSTR("FN-MDIA\n"), false);
                break;
            case NAV:
                // ergodox_infinity_lcd_color(5000, 65535, 10000); // green?
                st7565_write_P(PSTR("NAV\n"), false);
                break;
            case KOWERTY:
                // ergodox_infinity_lcd_color(65535, 30000, 0); // orange?
                st7565_write_P(PSTR("KOWERTY\n"), false);
                break;
            case COLEMAK_DH:
                // ergodox_infinity_lcd_color(1000, 0, 16000); // indigo?
                st7565_write_P(PSTR("COLEMAK_DH\n"), false);
                break;
            case NUMPAD:
                // ergodox_infinity_lcd_color(20000, 1000, 40000); // violet?
                st7565_write_P(PSTR("NUMPAD\n"), false);
                break;
            case QWERTY_CAPS:
                // ergodox_infinity_lcd_color(1000, 1000, 1000); // black?
                st7565_write_P(PSTR("QWERTY_CAPS\n"), false);
                break;

            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                st7565_write_ln_P(PSTR("Undefined"), false);
                st7565_on_user();
        }

        // Host Keyboard LED Status
        led_t led_state = host_keyboard_led_state();
        st7565_write(get_u8_str(g_tapping_term, ' '), false);
        st7565_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
        st7565_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
        st7565_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    } else {
        // Draw logo
        // ergodox_infinity_lcd_color(65535, 65535, 0); // red
        // ergodox_infinity_lcd_color(1000, 1000, 8000); // blue
        switch (get_highest_layer(layer_state)) {
            case BASE:
                render_my_logo();
                break;
            default:
                render_qmk_logo();
        }
    }
}
#endif
