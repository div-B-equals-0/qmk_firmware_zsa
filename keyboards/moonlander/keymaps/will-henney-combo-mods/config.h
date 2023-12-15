/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef TAPPING_TERM
#define TAPPING_TERM 300


#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 900000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"lzO7G/XomD9"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 14

#define RGB_MATRIX_STARTUP_SPD 60

/* WJH 2023-12-14 Refinements to the key combos for mods */
#define COMBO_TERM 300			/* Default 100 */
#define COMBO_MUST_HOLD_MODS
#define COMBO_HOLD_TERM 150

