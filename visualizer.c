/*
* @Author: Simon Myunggun Seo
* @Date:   2022-07-24 00:42:27
* @Last Modified by:   Simon Seo
* @Last Modified time: 2022-07-24 02:17:32
*/
#include QMK_KEYBOARD_H
#include "layers.h"

#ifdef ST7565_ENABLE
void st7565_task_user(void) {

    if (is_keyboard_master()) {
        // Host Keyboard Layer Status
        // st7565_off_user();
        st7565_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state)) {
            case BASE:
                ergodox_infinity_lcd_color(0, 0, 32767); // blue
                st7565_write_P(PSTR("BASE\n"), false);
                break;
            case SYMB:
                ergodox_infinity_lcd_color(65535, 0, 0); // red
                st7565_write_P(PSTR("SYMB\n"), false);
                break;
            case MDIA:
                st7565_write_P(PSTR("MDIA\n"), false);
                break;
            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                st7565_write_ln_P(PSTR("Undefined"), false);
                st7565_on_user();
        }

        // Host Keyboard LED Status
        led_t led_state = host_keyboard_led_state();
        st7565_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
        st7565_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
        st7565_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    } else {
        // Draw logo
        ergodox_infinity_lcd_color(65535, 0, 0); // red
        static const char qmk_logo[] = {
            0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
            0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
            0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
        };

        st7565_write(qmk_logo, false);
        st7565_write("  Simon's  Ergodox  ", false);
    }

}
#endif
