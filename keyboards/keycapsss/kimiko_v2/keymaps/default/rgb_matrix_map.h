/* Copyright 2020 @ben_roe (keycapsss.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef RGB_MATRIX_ENABLE

// RGB LED locations
enum led_location_map {
    LED_5,
    LED_4,
    LED_3,
    LED_2,
    LED_1,
    LED_ESC,
    LED_TAB,
    LED_Q,
    LED_W,
    LED_E,
    LED_R,
    LED_T,
    LED_G,
    LED_F,
    LED_D,
    LED_S,
    LED_A,
    LED_CAPS,
    LED_LSHIFT,
    LED_Z,
    LED_X,
    LED_C,
    LED_V,
    LED_B,
    LED_SQUARE_LEFT,
    LED_LSPACE,
    LED_LMO,
    LED_LGUI,
    LED_LALT,
    LED_LCTRL,
    
    LED_6,
    LED_7,
    LED_8,
    LED_9,
    LED_0,
    LED_GRV,
    LED_MINUS,
    LED_P,
    LED_O,
    LED_I,
    LED_U,
    LED_Y,
    LED_H,
    LED_J,
    LED_K,
    LED_L,
    LED_COLON,
    LED_QUOTE,
    LED_RSHIFT,
    LED_SLASH,
    LED_FULLSTOP,
    LED_COMMA,
    LED_M,
    LED_N,
    LED_SQUARE_RIGHT,
    LED_ENTER,
    LED_RMO,
    LED_BACK,
    LED_RGUI,
    LED_RALT,
};

const uint8_t LED_LIST_NUMROW[] = {
    LED_1,
    LED_2,
    LED_3,
    LED_4,
    LED_5,
    LED_6,
    LED_7,
    LED_8,
    LED_9,
    LED_0,
};

const uint8_t LED_LIST_LETTERS[] = {
    LED_Q,
    LED_W,
    LED_E,
    LED_R,
    LED_T,
    LED_G,
    LED_F,
    LED_D,
    LED_S,
    LED_A,
    LED_Z,
    LED_X,
    LED_C,
    LED_V,
    LED_B,
    LED_P,
    LED_O,
    LED_I,
    LED_U,
    LED_Y,
    LED_H,
    LED_J,
    LED_K,
    LED_L,
    LED_M,
    LED_N,
};

const uint8_t LED_LIST_ARROWS[] = {
    // 39,43,44,45
    LED_I,
    LED_J,
    LED_K,
    LED_L,
};

const uint8_t LED_LIST_HOME_END[] = {
    LED_U,
    LED_O
};

const uint8_t LED_LIST_PGUP_PGDN[] = {
    LED_Y,LED_H
};

const uint8_t LED_LIST_PR_NXT_WD[] = {
    LED_M,LED_FULLSTOP
};

const uint8_t LED_LIST_NUMKEYS[] = {
    LED_LALT,
    LED_X,
    LED_C,
    LED_V,
    LED_S,
    LED_D,
    LED_F,
    LED_W,
    LED_E,
    LED_R,
};

const uint8_t LED_LIST_BRACKETS[] = {
    LED_I,
    LED_O,
    LED_K,
    LED_L,
    LED_COMMA,
    LED_FULLSTOP,
};

const uint8_t LED_LIST_SYMBOLS[] = {
    LED_R,
    LED_T,
    LED_F,
    LED_G,
    LED_V,
    LED_B,
};

const uint8_t LED_LIST_BRACKETS_2[] = {
    LED_X,
    LED_C,
    LED_S,
    LED_D,
};

const uint8_t LED_LIST_NUM_SYMBOLS[] = {
    LED_N,
    LED_M,
    LED_H,
    LED_J,
};

#endif
