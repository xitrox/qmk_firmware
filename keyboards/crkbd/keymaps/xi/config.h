/* config.h - minimal override for pin testing */

#pragma once

// Basic RGB Matrix settings (non-conflicting)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#define RGB_MATRIX_STARTUP_VAL 80


#define COMBO_COUNT 1
#define COMBO_TERM 50

#define RGB_DISABLE_TIMEOUT 300000  // 5 minutes in milliseconds
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off RGB when suspended
#define RGB_MATRIX_TIMEOUT 300000  // 5 minutes in milliseconds