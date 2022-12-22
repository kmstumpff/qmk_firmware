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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // General
  [0] = LAYOUT_ortho_4x4(
    KC_MUTE,    KC_TRNS,    KC_TRNS,    KC_MPLY,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    DF(1),      DF(2),      DF(3),      DF(4)
  ),

  // Lighting
  [1] = LAYOUT_ortho_4x4(
    RGB_TOG,   RGB_HUI,    RGB_SAI,    RGB_VAI,
    RGB_MOD,   RGB_HUD,    RGB_SAD,    RGB_VAD,
    RGB_SPD,   RGB_SPI,    KC_TRNS,    KC_TRNS,
    DF(0),     KC_TRNS,    EE_CLR,     QK_BOOT
  ),

  // Keypad ( I dont need this...)
  [2] = LAYOUT_ortho_4x4(
    KC_P7,    KC_P8,    KC_P9,    KC_PMNS,
    KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
    KC_P1,    KC_P2,    KC_P3,    KC_PSLS,
    DF(0),    KC_P0,    KC_PDOT,  KC_PENT
  ),

  [3] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    DF(0),   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  // MIDI
  [4] = LAYOUT_ortho_4x4(
    MI_TOGG,  MI_OCTD,  MI_OCTU,  DF(0),
    MI_C,     MI_Cs,    MI_D,     MI_Ds,
    MI_E,     MI_F,     MI_Fs,    MI_G,
    MI_Gs,    MI_A,     MI_As,    MI_B
  ),

  [5] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  [6] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  [7] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  [8] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),

  [9] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS
  ),
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),      ENCODER_CCW_CW(KC_MPRV, KC_MNXT)  },
    [1] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(RGB_VAD, RGB_VAI)  },
    [2] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [3] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [4] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [5] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [6] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [7] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [8] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [9] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),      ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  }
};
#endif

#ifdef RGB_MATRIX_ENABLE
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
            case 4:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_CYAN);
                break;
            case 3:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_YELLOW);
                break;
            case 2:
                rgb_matrix_set_color(BACKLIGHTS[i], RGB_GREEN);
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
