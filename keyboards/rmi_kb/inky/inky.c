/* Copyright 2022 Ramon Imbao
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

#include "quantum.h"
#include "action_layer.h"


 #ifdef RGB_MATRIX_ENABLE
 led_config_t g_led_config = {{
     // Key Matrix to LED Index
     { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
     { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
     { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
     { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
     { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
 }, {
     // LED Index to Position
     { 0, 32 },
 }, {
     // LED Index to Flags
     LED_FLAG_INDICATOR
 }};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    // RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0);

    if (layer_state_is(1)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 230, 255, 0);
    } else if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 255, 255, 255);
    }else {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0);
    }

    // else if (host_keyboard_led_state().caps_lock) {
    //     RGB_MATRIX_INDICATOR_SET_COLOR(0, 255, 255, 255);
    // } else {
    //     RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0);
    // }

    return false;
}


 #endif
