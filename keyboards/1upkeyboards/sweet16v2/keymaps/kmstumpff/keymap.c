/* Copyright 2022 ziptyze
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

#include QMK_KEYBOARD_H

#define RGB_CUSTOM_LAYERS true
#define RGB_HASS_BLUE 0x03, 0x8f, 0xc7

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // General
  [0] = LAYOUT_ortho_4x4(
    _______,    EE_CLR,     QK_BOOT,    KC_MUTE,
    _______,    _______,    _______,    KC_MPLY,
    _______,    _______,    _______,    KC_MNXT,
    _______,    _______,    _______,    KC_MPRV
  ),

  // Lighting
  [1] = LAYOUT_ortho_4x4(
    RGB_TOG,   RGB_SPD,    RGB_SPI,    _______,
    _______,   _______,    _______,    _______,
    RGB_MOD,   RGB_HUI,    RGB_SAI,    BL_INC,
    RGB_RMOD,  RGB_HUD,    RGB_SAD,    BL_DEC
  ),

  [2] = LAYOUT_ortho_4x4(
    _______,   XXXXXXX,    XXXXXXX,    _______,
    KC_F21,    KC_F22,     KC_F23,     KC_F24,
    KC_F17,    KC_F18,     KC_F19,     KC_F20,
    KC_F13,    KC_F14,     KC_F15,     KC_F16
  ),

  [3] = LAYOUT_ortho_4x4(
    _______,       UC(0x40B),      UC(0x30C4),    _______,
    UC(0x2B88),    UC(0x2B89),     UC(0x2B8A),    UC(0x2B8B),
    UC(0x2B84),    UC(0x2B85),     UC(0x2B86),    UC(0x2B87),
    UC(0x2B80),    UC(0x2B81),     UC(0x2B82),    UC(0x2B83)
  ),

  // MIDI
  [4] = LAYOUT_ortho_4x4(
    MI_TOGG,  MI_OCTD,  MI_OCTU,  _______,
    MI_Gs,    MI_A,     MI_As,    MI_B,
    MI_E,     MI_F,     MI_Fs,    MI_G,
    MI_C,     MI_Cs,    MI_D,     MI_Ds
  ),

  [5] = LAYOUT_ortho_4x4(
    _______,  JS_12,  JS_13,  _______,
    JS_8,     JS_9,   JS_10,  JS_11,
    JS_4,     JS_5,   JS_6,   JS_7,
    JS_0,     JS_1,   JS_2,   JS_3
  ),

//   [6] = LAYOUT_ortho_4x4(
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______
//   ),

//   [7] = LAYOUT_ortho_4x4(
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______
//   ),

//   [8] = LAYOUT_ortho_4x4(
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______
//   ),

//   [9] = LAYOUT_ortho_4x4(
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______,
//     _______,   _______,    _______,    _______
//   ),
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  { ENCODER_CCW_CW(DF(4), DF(1)),      ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =  { ENCODER_CCW_CW(DF(0), DF(2)),      ENCODER_CCW_CW(RGB_VAD, RGB_VAI)  },
    [2] =  { ENCODER_CCW_CW(DF(1), DF(3)),      ENCODER_CCW_CW(_______, _______)  },
    [3] =  { ENCODER_CCW_CW(DF(2), DF(4)),      ENCODER_CCW_CW(_______, _______)  },
    [4] =  { ENCODER_CCW_CW(DF(3), DF(0)),      ENCODER_CCW_CW(_______, _______)  },
    [5] =  { ENCODER_CCW_CW(_______, _______),      ENCODER_CCW_CW(_______, _______)  },
    // [6] =  { ENCODER_CCW_CW(_______, _______),      ENCODER_CCW_CW(_______, _______)  },
    // [7] =  { ENCODER_CCW_CW(_______, _______),      ENCODER_CCW_CW(_______, _______)  },
    // [8] =  { ENCODER_CCW_CW(_______, _______),      ENCODER_CCW_CW(_______, _______)  },
    // [9] =  { ENCODER_CCW_CW(_______, _______),      ENCODER_CCW_CW(_______, _______)  }
};
#endif

#if defined(RGB_MATRIX_ENABLE) && defined(RGB_CUSTOM_LAYERS)
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     for (uint8_t i = led_min; i < led_max; i++) {
//         switch(get_highest_layer(layer_state|default_layer_state)) {
//             case 4:
//                 rgb_matrix_set_color(i, RGB_CYAN);
//                 break;
//             case 3:
//                 rgb_matrix_set_color(i, RGB_YELLOW);
//                 break;
//             case 2:
//                 rgb_matrix_set_color(i, RGB_GREEN);
//                 break;
//             case 1:
//                 rgb_matrix_set_color(i, RGB_RED);
//                 break;
//             case 0:
//                 rgb_matrix_set_color(i, RGB_BLUE);
//                 break;
//             default:
//                 break;
//         }
//     }
//     return false;
// }


// Key lights
// 0 1 2 3
// 4 5 6 7
// 8 9 10 11
// 12 13 14 15

// Back lights
// 16 17
// 18 19


const uint8_t RGB_MAPPER[20] = {
    0,  // 0
    1,  // 1
    2,  // 2
    3,  // 3
    9,  // 4
    7,  // 5
    6,  // 6
    5,  // 7
    10, // 8
    11, // 9
    12, // 10
    13, // 11
    19, // 12
    17, // 13
    16, // 14
    15, // 15
    8,  // 16
    4,  // 17
    18, // 18
    14, // 19
};


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    const uint8_t NUM_LIGHTS = 4;
    const uint8_t BACKLIGHTS[4] = {RGB_MAPPER[16],RGB_MAPPER[17],RGB_MAPPER[18],RGB_MAPPER[19]};

    for (uint8_t i = 0; i < NUM_LIGHTS; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 5:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_GREEN);
                break;
            case 4:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_YELLOW);
                break;
            case 3:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_ORANGE);
                break;
            case 2:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_HASS_BLUE);
                break;
            case 1:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_RED);
                break;
            case 0:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_BLUE);
                break;
            default:
                break;
        }
    }
    return false;
}
#endif
