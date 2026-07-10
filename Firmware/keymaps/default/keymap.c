// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _MAC_DEFAULT, 
    _NUM_PAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        KC_MUTE,   KC_VOLD,   KC_VOLU,  
        KC_BRID,   KC_BRIU,   KC_MCTL, 
        KC_PGDN,   KC_PGUP,   KC_DEL
    // ), 
    // To be configured later
    // [1] = LAYOUT_ortho_3x3(
    //     KC_1,   KC_2,   KC_3,  
    //     KC_4,   KC_5,   KC_6, 
    //     KC_7,   KC_8,   KC_9
     )
};


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif

// //code for layer switching TBI

#ifdef OLED_ENABLE
bool oled_task_user() {
    oled_set_cursor(0,1);
    switch (get_highest_layer(layer_state)) {
        case _MAC_DEFAULT: 
        oled_write("hope you have a nice day.", false);
        break; 

        case _NUM_PAD: 
        oled_write("Number Pad", false);
    }
    return false; 
};

#endif