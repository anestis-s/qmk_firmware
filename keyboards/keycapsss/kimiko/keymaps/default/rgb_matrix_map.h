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

};

const uint8_t LED_LIST_NUMROW[] = {
    LED_1,
    LED_2,
    LED_3,
    LED_4,
    LED_5,
};

#endif
