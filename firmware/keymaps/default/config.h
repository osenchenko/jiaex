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
#if !defined(__ASSEMBLER__)

// Defines names for use in layer keycodes and the keymap
enum jiaex_layers {
    LIN = 0,     // base Linux keymap layer
    WIN,         // 1 base Windows keymap layer
    MAC,         // 2 base Mac OS keymap layer
    LIN_SYM,     // 3
    LIN_FN1,     // 4
    LIN_FN2,     // 5
    LIN_FN3,     // 6
    WIN_SYM,     // 7
    WIN_FN1,     // 8
    WIN_FN2,     // 9
    WIN_FN3,     // 10
    MAC_SYM,     // 11
    MAC_FN1,     // 12
    MAC_FN2,     // 13
    MAC_FN3,     // 14
    SPECIAL      // 15
};


#include "quantum.h"

enum custom_keycodes {          //   # Make sure have the awesome keycode ready
  ALT_TAB = SAFE_RANGE,
  VSCODE_CTRL_TAB,
  PROG_RIGHT_ARROW, // ->
  PROG_FAT_RIGHT_ARROW, //=>
  COPY_URL_IN_BROWSER // F6 -> Ctrl+C
};
#endif