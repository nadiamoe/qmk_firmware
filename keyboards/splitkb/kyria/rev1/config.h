/*
Copyright 2022 Thomas Baart <thomas@splitkb.com>

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

#define OLED_DISPLAY_128X64
#define SPLIT_OLED_ENABLE

// Roobre's patches
// #define MASTER_RIGHT
#define TAPPING_TERM 175
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 2 // Remember: Encoder resolution must be flashed on the side which has the encoder, not only on the master!
// End of Roobre's patches
