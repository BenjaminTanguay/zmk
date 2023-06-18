/* Copyright 2023 Benjamin Tanguay
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

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>


// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ ¸ │ < │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ` │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ é │        │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬──┤
 * │    │    │    │                        │    │    │    │  │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴──┘
 */
// Row 1
#define FR_HASH  GRAVE              // #
#define FR_N1    N1                 // 1
#define FR_N2    N2                 // 2
#define FR_N3    N3                 // 3
#define FR_N4    N4                 // 4
#define FR_N5    N5                 // 5
#define FR_N6    N6                 // 6
#define FR_N7    N7                 // 7
#define FR_N8    N8                 // 8
#define FR_N9    N9                 // 9
#define FR_N0    N0                 // 0
#define FR_MINUS MINUS              // -
#define FR_EQUAL EQUAL              // =
// Row 2
#define FR_Q          Q             // Q
#define FR_W          W             // W
#define FR_E          E             // E
#define FR_R          R             // R
#define FR_T          T             // T
#define FR_Y          Y             // Y
#define FR_U          U             // U
#define FR_I          I             // I
#define FR_O          O             // O
#define FR_P          P             // P
#define FR_CIRC_DEAD  LBKT          // ^ (dead)
#define FR_CED        RBKT          // ¸ (dead)
#define FR_LT         BACKSLASH     // <

// Row 3
#define FR_A          A             // A
#define FR_S          S             // S
#define FR_D          D             // D
#define FR_F          F             // F
#define FR_G          G             // G
#define FR_H          H             // H
#define FR_J          J             // J
#define FR_K          K             // K
#define FR_L          L             // L
#define FR_SEMI       SEMI          // ;
#define FR_GRAVE_DEAD SINGLE_QUOTE  // ` (dead)

// Row 4
#define FR_Z      Z                 // Z
#define FR_X      X                 // X
#define FR_C      C                 // C
#define FR_V      V                 // V
#define FR_B      B                 // B
#define FR_N      N                 // N
#define FR_M      M                 // M
#define FR_COMMA  COMMA             // ,
#define FR_DOT    DOT               // .
#define FR_E_AIGU SLASH             // é


 /* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ | │ ! │ " │ / │ $ │ % │ ? │ & │ * │ ( │ ) │ _ │ + │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ ¨ │ > │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ ` │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │ Z │ X │ C │ V │ B │ N │ M │ ' │ . │ É │        │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬──┤
 * │    │    │    │                        │    │    │    │  │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴──┘
 */

// Row 1
#define FR_PIPE  TILDE              // |
#define FR_EXCL  LS(FR_N1)          // !
#define FR_QUOTE LS(FR_N2)          // "
#define FR_SLASH LS(FR_N3)          // /
#define FR_DLLR  LS(FR_N4)          // $
#define FR_PRCNT LS(FR_N5)          // %
#define FR_QUES  LS(FR_N6)          // ?
#define FR_AMPS  LS(FR_N7)          // &
#define FR_ASTRK LS(FR_N8)          // *
#define FR_LPAR  LS(FR_N9)          // (
#define FR_RPAR  LS(FR_N0)          // )
#define FR_UNDER LS(FR_MINUS)       // _
#define FR_PLUS  LS(FR_EQUAL)       // +
// Row 2
#define FR_CIRC LEFT_BRACE          // ^
#define FR_DIES RIGHT_BRACE         // ¨
#define FR_GT   PIPE                // >
// Row 3
#define FR_COLON COLON              // :
#define FR_GRAVE DOUBLE_QUOTE       // `
// Row 4
#define FR_SINGLE_QUOTE LESS_THAN   // '
// #define FR_DOT    GREATER_THAN   // .
#define FR_CAP_E_AIGU LS(FR_E_AIGU) // É

 /* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ \ │ ± │ @ │ £ │ ¢ │ ¤ │ ¬ │ ¦ │ ² │ ³ │ ¼ │ ½ │ ¾ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │ § │ ¶ │ [ │ ] │ } │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │   │   │   │   │   │   │   │   │   │ ~ │ { │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │   │   │   │   │   │   │ µ │   │   │ ´ │        │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬──┤
 * │    │    │    │                        │    │    │    │  │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴──┘
 */


// Row 1
#define FR_BCK_SLSH     LA(FR_HASH)    // \
#define FR_PLUS_MINUS   LA(FR_N1)      // ±
#define FR_AT           LA(FR_N2)      // @
#define FR_POUND        LA(FR_N3)      // £
#define FR_CENT         LA(FR_N4)      // ¢
#define FR_CURR         LA(FR_N5)      // ¤
#define FR_NOT          LA(FR_N6)      // ¬
#define FR_BROKEN_BAR   LA(FR_N7)      // ¦
#define FR_TWO_EXP      LA(FR_N8)      // ²
#define FR_THREE_EXP    LA(FR_N9)      // ³
#define FR_QUART        LA(FR_N0)      // ¼
#define FR_HALF         LA(FR_MINUS)   // ½
#define FR_THREE_FOURTH LA(FR_EQUAL)   // ¾
// Row 2
#define FR_SECT         LA(FR_O)       // §
#define FR_PILCROW      LA(FR_P)       // ¶
#define FR_LBKT         LA(FR_CIRC)    // [
#define FR_RBKT         LA(FR_CED)     // ]
#define FR_RBRC         LA(FR_LT)      // }
// Row 3
#define FR_TILDE        LA(FR_SEMI)    // ~
#define FR_LBRC         LA(FR_GRAVE)   // {
// Row 4
#define FR_MU           LA(FR_M)       // µ
#define FR_AIGU         LA(FR_E_AIGU)  // ´