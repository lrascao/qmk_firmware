#include QMK_KEYBOARD_H
#include <version.h>
#include "keymap.h"
#include "tapdance.h"

// Tap Dance definitions
// https://docs.qmk.fm/#/feature_tap_dance
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_DOT_M] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_M),
};
