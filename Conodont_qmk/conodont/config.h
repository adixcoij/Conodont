// Copyright 2023 mfujimak (@mfujimak)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SPLIT_HAND_PIN F5

#define SOFT_SERIAL_PIN D0

#define MATRIX_COL_PINS \
    { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS \
    { F5, F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION ROW2COL
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
