#include QMK_KEYBOARD_H

#define KC_LOWR MO(_LOWER)
#define KC_RASE MO(_RAISE)

// clang-format off
#define _______________FUNC_LEFT_______________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6
#define _______________FUNC_RIGHT______________       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12

#define ______________NUMBER_LEFT______________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6
#define ______________NUMBER_RIGHT_____________       KC_7,    KC_8,    KC_9,    KC_0

#define _______________QWERTY_L1_______________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _______________QWERTY_L2_______________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _______________QWERTY_L3_______________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _______________QWERTY_R1_______________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _______________QWERTY_R2_______________       KC_H,    KC_J,    KC_K,    KC_L
#define _______________QWERTY_R3_______________       KC_N,    KC_M

#define ___________________BLANK___________________       _______, _______, _______, _______, _______

// clang-format on
//
#define LAYOUT_wrapper(...) LAYOUT_all(__VA_ARGS__)

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE
};

enum userspace_keycodes {
    KC_VRSN = SAFE_RANGE,
    NEW_SAFE_RANGE
};

// Space Cadet chords
// https://docs.qmk.fm/#/feature_space_cadet
#define LCCO_KEYS KC_LCTL, KC_LSFT, KC_9
#define RCCC_KEYS KC_RCTL, KC_RSFT, KC_9
