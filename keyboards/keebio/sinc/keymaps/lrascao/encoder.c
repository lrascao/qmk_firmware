#include QMK_KEYBOARD_H
#include <version.h>
#include "keymap.h"

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),     ENCODER_CCW_CW(KC_PGUP, KC_PGDN)  }
    /* [_LOWER] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),     ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  }, */
    /* [_RAISE] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),     ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  }, */
};
#endif


