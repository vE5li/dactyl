/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* overwrite pins to match the teensy 2.0 */
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { C6, D7, C7, B4, B5 }

/* needed for teensy 2.0 to properly detect the master */
#define SPLIT_USB_DETECT

/* use serial in order for rgb to work */
#define USE_SERIAL

/* use right as master (left because of FLIP_HALF) */
#define MASTER_LEFT

/* flip thumb clusters */
#define FLIP_HALF

/* rgb lighting */
#undef RGBLED_NUM
#define RGBLED_NUM 8
#define RGBLED_SPLIT { 4, 4 }
#define RGBLIGHT_ANIMATIONS
