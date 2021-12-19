#include QMK_KEYBOARD_H
#include "keymap.h"
#include "logo.h"

static uint16_t notif_timer = 0, duration = 0;
static bool leader_on = false;

oled_rotation_t oled_init_user(oled_rotation_t rotation) {

    oled_clear();
    oled_render();

    return OLED_ROTATION_0;
}

void oled_notify(const char *data, uint16_t t) {
    notif_timer = timer_read();
    duration = t;

    /* oled_clear(); */
    oled_write_P(data, false);
}

void oled_leader(bool on) {
    leader_on = on;
}

bool oled_task_user(void) {
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
#ifdef LOGO_ENABLE
            if (leader_on) {
                oled_write_P(PSTR("Leader"), false);
            } else if (timer_elapsed(notif_timer) > duration) {
                render_logo();
            }
#endif
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}

