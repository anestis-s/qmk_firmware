RGB_MATRIX_EFFECT(my_cool_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static void rgb_matrix_set_hsv(uint8_t i, uint8_t hue, uint8_t sat, uint8_t value) {
    HSV hsv = {.h = hue, .s = sat, .v = value};
    hsv.v = (hsv.v > RGB_MATRIX_MAXIMUM_BRIGHTNESS) ? RGB_MATRIX_MAXIMUM_BRIGHTNESS : hsv.v;
    RGB rgb = hsv_to_rgb(hsv);
    rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
}
// static void rgb_matrix_set_layers(uint8_t led_min, uint8_t led_max) {
//     switch(get_highest_layer(layer_state)) {
//         case _RAISE:
//             rgb_matrix_set_color_all(RGB_BLACK);
//             for (uint8_t j = 0; j < sizeof(LED_LIST_ARROWS); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_ARROWS[j], HSV_BLUE);
//                     }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_HOME_END); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_HOME_END[j], HSV_WHITE);
//                     }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_PGUP_PGDN); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_PGUP_PGDN[j], HSV_ORANGE);
//                     }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_PR_NXT_WD); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_PR_NXT_WD[j], HSV_RED);
//                     }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_NUMKEYS); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_NUMKEYS[j], HSV_YELLOW);
//                     }
//             break;
//         case _LOWER:
//             rgb_matrix_set_color_all(RGB_BLACK);
//             for (uint8_t j = 0; j < sizeof(LED_LIST_NUM_SYMBOLS); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_NUM_SYMBOLS[j], HSV_MAGENTA);
//                 }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_BRACKETS); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_BRACKETS[j], HSV_PINK);
//                 }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_BRACKETS_2); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_BRACKETS_2[j], HSV_YELLOW);
//                 }
//             for (uint8_t j = 0; j < sizeof(LED_LIST_SYMBOLS); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_SYMBOLS[j], HSV_SPRINGGREEN);
//                 }    
//             break;
//         case _ADJUST:
//             rgb_matrix_set_color_all(RGB_BLACK);
//             break;
//         case _QWERTY:
//             rgb_matrix_set_color_all(40,40,40);
//             for (uint8_t j = 0; j < sizeof(LED_LIST_LETTERS); j++) {
//                         rgb_matrix_set_hsv(LED_LIST_LETTERS[j], HSV_BLUE);
//                     }
//             if (host_keyboard_led_state().caps_lock) {
//                 rgb_matrix_set_hsv(LED_CAPS, HSV_GREEN);
//             }
//             break;
//     }
// }

static bool my_cool_effect(effect_params_t* params, i_f effect_func) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
//   for (uint8_t i = led_min; i < led_max; i++) {
//     rgb_matrix_set_layers(i, 0xff, 0xff, 0x00);
//   }
    // switch(get_highest_layer(layer_state)) {
    //     case _RAISE:
    //         rgb_matrix_set_color_all(RGB_BLACK);
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_ARROWS); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_ARROWS[j], HSV_BLUE);
    //                 }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_HOME_END); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_HOME_END[j], HSV_WHITE);
    //                 }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_PGUP_PGDN); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_PGUP_PGDN[j], HSV_ORANGE);
    //                 }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_PR_NXT_WD); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_PR_NXT_WD[j], HSV_RED);
    //                 }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_NUMKEYS); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_NUMKEYS[j], HSV_YELLOW);
    //                 }
    //         break;
    //     case _LOWER:
    //         rgb_matrix_set_color_all(RGB_BLACK);
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_NUM_SYMBOLS); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_NUM_SYMBOLS[j], HSV_MAGENTA);
    //             }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_BRACKETS); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_BRACKETS[j], HSV_PINK);
    //             }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_BRACKETS_2); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_BRACKETS_2[j], HSV_YELLOW);
    //             }
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_SYMBOLS); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_SYMBOLS[j], HSV_SPRINGGREEN);
    //             }    
    //         break;
    //     case _ADJUST:
    //         rgb_matrix_set_color_all(RGB_BLACK);
    //         break;
    //     case _QWERTY:
    //         rgb_matrix_set_color_all(40,40,40);
    //         for (uint8_t j = 0; j < sizeof(LED_LIST_LETTERS); j++) {
    //                     rgb_matrix_set_hsv(LED_LIST_LETTERS[j], HSV_BLUE);
    //                 }
    //         if (host_keyboard_led_state().caps_lock) {
    //             rgb_matrix_set_hsv(LED_CAPS, HSV_GREEN);
    //         }
    //         break;
    // }
    uint8_t time = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed / 4, 1));
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        RGB rgb = rgb_matrix_hsv_to_rgb(effect_func(rgb_matrix_config.hsv, i, time));
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  return rgb_matrix_check_finished_leds(led_max);
// }
#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS



