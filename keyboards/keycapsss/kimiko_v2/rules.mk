# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no      # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes
OLED_ENABLE = no
OLED_DRIVER = SSD1306   # Enables the use of OLED displays
ENCODER_ENABLE = no       # ENables the use of one or more encoders
RGBLIGHT_ENABLE = no     # Enable keyboard RGB underglow
RGB_MATRIX_ENABLE = yes   # Enable per-key lighting
RGB_MATRIX_DRIVER = WS2812
RGB_MATRIX_CUSTOM_USER = no

# LTO: Link Time Optimizations.
# Reduce compiled size, but will automatically disable the legacy TMK Macros and Functions features.
# This does not affect QMK Macros and Layers
LTO_ENABLE = yes


DEFAULT_FOLDER = keycapsss/kimiko_v2/rev1