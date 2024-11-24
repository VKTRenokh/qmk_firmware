// NOTE: note just for me: edit this file only with helix
/* Copyright 2022 splitkb.com <support@splitkb.com>
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

#pragma once

// Not yet available in `info.json`
#ifdef OLED_ENABLE
#    define OLED_FONT_H "keyboards/splitkb/aurora/corne/glcdfont.c"
#endif

#define RGBLIGHT_DEFAULT_HUE 150 // Hue for pink
#define RGBLIGHT_DEFAULT_SAT 255 // Saturation max
#define RGBLIGHT_DEFAULT_VAL 255 // Brightness max
#define RGBLIGHT_SLEEP
#define ENABLE_RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_TWINKLE
