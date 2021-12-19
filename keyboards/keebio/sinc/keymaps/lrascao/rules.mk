# This enables Link Time Optimization, saving a significant amount of space.
EXTRAFLAGS += -flto

# OLED
OLED_ENABLE = yes
OLED_DRIVER = SSD1306

# All RGB animations disabled except rainbow swirl to save up
# on firmware space
RGBLIGHT_ENABLE = yes

BACKLIGHT_ENABLE = no
COMMAND_ENABLE   = no  # Commands for debug and configuration
SWAP_HANDS_ENABLE= no  # Allow swapping hands of keyboard
UNICODE_ENABLE   = no  # Unicode
CONSOLE_ENABLE = no    # Console for debug

# https://docs.qmk.fm/#/feature_leader_key
# 182 bytes
LEADER_ENABLE = yes

# Audio control and System control
EXTRAKEY_ENABLE = yes

# The Combo feature is a chording type solution for adding custom actions.
# It lets you hit multiple keys at once and produce a different effect.
# For instance, hitting A and S within the combo term would hit ESC instead,
# or have it perform even more complex tasks.
# https://docs.qmk.fm/#/feature_combo
# (1582 bytes)
COMBO_ENABLE = yes

# https://docs.qmk.fm/#/feature_tap_dance
# (1042 bytes)
TAP_DANCE_ENABLE = yes

# Programmable button is a feature that can be used to send keys that have no predefined meaning.
# This means they can be processed on the host side by custom software without colliding without
# the operating system trying to interpret these keys.
# (324 bytes)
PROGRAMMABLE_BUTTON_ENABLE = yes

# Is Logo enabled
LOGO_ENABLE = yes

# https://docs.qmk.fm/#/feature_auto_shift
# AUTO_SHIFT_ENABLE = yes

// https://docs.qmk.fm/#/feature_encoders?id=encoder-map
ENCODER_MAP_ENABLE = yes

ifeq ($(strip $(OLED_ENABLE)), yes)
SRC += oled.c
endif

ifeq ($(strip $(ENCODER_ENABLE)), yes)
SRC += encoder.c
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
SRC += tapdance.c
endif

ifeq ($(strip $(COMBO_ENABLE)), yes)
SRC += combo.c
endif

ifeq ($(strip $(LOGO_ENABLE)), yes)
SRC += logo.c
OPT_DEFS += -DLOGO_ENABLE
endif

# Overrides ../../rules.mk
DEFAULT_FOLDER = keebio/sinc/rev2

