/* Copyright 2021 Andre Brait <andrebrait@gmail.com>
 *           2022 Roman Nevolin
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

// RGB power saving
#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_TIMEOUT 180000     // 3 minutes (3 * 60 * 1000ms)
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif

#define FORCE_NKRO

// polling rate
#define USB_POLLING_INTERVAL_MS 1
#undef QMK_KEYS_PER_SCAN
#define QMK_KEYS_PER_SCAN 12

// debounce changed due to different algo
#undef DEBOUNCE
#define DEBOUNCE 25
