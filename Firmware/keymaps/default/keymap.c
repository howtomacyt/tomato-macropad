// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _MAC_DEFAULT, 
    _MAC_EDITING
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x3(
        KC_MUTE,   KC_VOLU,   KC_VOLD,  
        KC_BRIU,   KC_BRID,   KC_MCTL, 
        KC_COPY,   KC_PASTE,   KC_FIND
    ), 
    //To be configured later
    [1] = LAYOUT_ortho_3x3(
        KC_MUTE,   KC_VOLU,   KC_VOLD,  
        KC_BRIU,   KC_BRID,   KC_MCTL, 
        KC_COPY,   KC_PASTE,   KC_FIND
    )
};


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif

//code for layer switching TBI

#ifdef OLED_ENABLE
bool oled_task_user() {
    oled_set_cursor(0,1);
    switch (get_highest_layer(layer_state)) {
        case _MAC_DEFAULT: 
        oled_write("Default", false);
        break; 

        case _MAC_EDITING: 
        oled_write("Editing", false);
    }
    return false; 
};

#endif