/* Copyright 2019 MechMerlin
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
#include "tg4x.h"

led_config_t g_led_config = {
    {}, 
    {{0, 32}, {0, 48}, {49, 48}, {98, 48}, {146, 48}, {195, 48}, {244, 38}},
    {0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02}
};

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(0, 255, 255, 255);
    }else {
        rgb_matrix_set_color(0, 0, 0, 0);
    }
}