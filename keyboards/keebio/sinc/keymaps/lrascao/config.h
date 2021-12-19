#pragma once

// https://beta.docs.qmk.fm/using-qmk/hardware-features/feature_split_keyboard
#define USE_I2C

#define OLED_DISPLAY_128X64

// https://docs.qmk.fm/#/feature_bootmagic?id=split-keyboards
// To trigger the bootloader, you hold ESC down when plugging the keyboard in.
#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 2

// https://docs.qmk.fm/#/feature_tap_dance
#define TAPPING_TERM 200

// https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

// https://docs.qmk.fm/#/feature_rgblight?id=example-usage-to-reduce-memory-footprint
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

// The TAPPING_TERM time is the maximum time allowed between taps of your Tap Dance key, and is measured in milliseconds.
#define TAPPING_TERM 200

// Space cadet shift override of parenthesis location keys
#define LSPO_KEY KC_8   // Open parenthesis '('
#define RSPC_KEY KC_9   // Close parenthesis ')'

// https://docs.qmk.fm/#/feature_leader_key?id=adding-leader-key-support-in-the-rulesmk
#define LEADER_NO_TIMEOUT
#define LEADER_TIMEOUT 300
#define LEADER_PER_KEY_TIMING

// https://docs.qmk.fm/#/feature_encoders
// Encoder EC11E18244AU (https://tech.alpsalpine.com/e/products/detail/EC11E18244AU/)
// Number of pulse 18
#define ENCODER_RESOLUTION 18

