// Copyright 2023 LazyTanuki (@LazyTanuki)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DEBOUNCE	5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// Tap dance
#define TAPPING_TERM 250

// If you press a dual-role key, press another key, and then release the dual-role key, all within the tapping term, by default the dual-role key will perform its tap action. If the HOLD_ON_OTHER_KEY_PRESS option is enabled, the dual-role key will perform its hold action instead.

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
