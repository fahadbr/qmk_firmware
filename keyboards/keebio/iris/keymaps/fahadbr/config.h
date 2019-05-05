/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Use I2C or Serial, not both */
//#define USE_I2C
#define USE_SERIAL

/* Select hand configuration */

//#define MASTER_LEFT
 //#define MASTER_RIGHT
#define EE_HANDS

#define TAPPING_TERM 200
// this is kind of a hack. there is no way to override the 'TAPPING_TERM'
// for tap dancing so its only used for tap dancing. 'TAPPING_TERM_CUSTOM' is used
// as the default tapping term for layer and modifier dual function keys
// as defined in the 'get_tapping_term' func
#define TAPPING_TERM_CUSTOM 150
#define TAPPING_TERM_PER_KEY

//some mouse keys tweaking, as it is generally too slow by default
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#undef PRODUCT
#define PRODUCT         "Fahad's Iris Keyboard"
