/* Copyright 2021 @ Mike Killewald
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


#if defined(RGB_MATRIX_ENABLE)
//#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED    
#    define CAPS_LOCK_INDICATOR_COLOR RGB_RED
#    define CAPS_LOCK_INDICATOR_LIGHT_TAB
#    define MACOS_FN_INDICATOR_COLOR RBG_ORANGE    
//    #define LED_ESC 	0
//    #define LED_TAB 	30
//    #define LED_CAPS 	45
//    #define LEC_FN 		77
#endif