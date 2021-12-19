#include QMK_KEYBOARD_H
#include <version.h>
#include "keymap.h"
#include "oled.h"

enum combos {
  VERSION_COMBO,
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM vsn_combo[] = {KC_V, KC_S, KC_N, COMBO_END};

combo_t key_combos[] = {
  [VERSION_COMBO] = COMBO_ACTION(vsn_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case VERSION_COMBO:
      if (pressed) {
#ifdef OLED_ENABLE
        oled_notify(PSTR(QMK_VERSION), 5000);
#endif
      }
      break;
  }
}

