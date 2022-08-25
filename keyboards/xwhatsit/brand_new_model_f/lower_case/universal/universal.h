/* Copyright 2020 Purdea Andrei
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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

// Note: unused columns 8..14 are not listed here. Column 15 is listed here as column 8
// Note arguments representing the layout are named based on default F77 hhkb split backspace configuration, for other layouts argument naming might not make much sense
// This was done for ease of implementation.

#define LAYOUT_all( \
K303, K302, K301, K300,   \
	        K209, K208, K207, K206, K205, K204, K203, K202, K201, K200, \
    	K109, K108, K107, K106, K105, K104, K103, K102, K101, K100,   \
	K009, K008, K007, K006, K005, K004, K003, K002, K001, K000 \
) { \
{ K303, K302, K301, K300 },	  \
	{ K209, K208, K207, K206, K205, K204, K203, K202, K201, K200 }, \
    	{ K109, K108, K107, K106, K105, K104, K103, K102, K101, K100 }, \
	{ K009, K008, K007, K006, K005, K004, K003, K002, K001, K000} \
}
