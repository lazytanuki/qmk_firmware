// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include "keymap_us.h"
#include QMK_KEYBOARD_H

// Layers
#define _COLEMAK 0
#define _COLEMAK_MOD1 1
#define _COLEMAK_NUMPAD 2
#define _COLEMAK_SYMBOLS 3

// Tap Dance declarations
enum {
    TD_LSFT_LALT = 0
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_LSFT_LALT] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_LALT)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
        KC_GRV,              KC_1,         KC_2,         KC_3,          KC_4,             KC_5,              KC_6,           KC_7,    KC_8,    KC_9,    KC_0,       KC_MINS,
        KC_TAB,              KC_Q,         KC_W,         KC_F,          KC_P,             KC_B,              KC_J,           KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_LBRC,
        LCTL_T(KC_ESC),      KC_A,         KC_R,         KC_S,          KC_T,             KC_G,              KC_K,           KC_N,    KC_E,    KC_I,    KC_O,       KC_QUOT,
        KC_LSFT,             KC_Z,         KC_X,         KC_C,          KC_D,             KC_V,              KC_M,           KC_H,    KC_COMM, KC_DOT,  KC_SLSH,    KC_ENT,
        MO(_COLEMAK_NUMPAD), KC_LCTL,      KC_LALT,      KC_LGUI,       TD(TD_LSFT_LALT), MO(_COLEMAK_MOD1), KC_SPC,         KC_RALT, KC_RCTL, KC_PGUP, KC_PGDN,    MO(_COLEMAK_SYMBOLS)
        ),
    [_COLEMAK_MOD1] = LAYOUT(
        KC_GRV,              KC_F1,        KC_F2,        KC_F3,         KC_F4,            KC_F5,             KC_F6,          KC_F7,   KC_F8,   KC_F9,   KC_F10,     KC_F11,
        QK_BOOT,             LSFT(KC_TAB), KC_LBRC,      KC_RBRC,       KC_TRNS,          LALT(KC_TAB),      LALT(KC_RIGHT), KC_PGUP, KC_UP,   KC_PGDN, KC_TRNS,    KC_SCROLL_LOCK,
        KC_TRNS,             KC_TAB,       KC_LPRN,      KC_RPRN,       KC_ENT,           KC_APPLICATION,    LALT(KC_LEFT),  KC_LEFT, KC_DOWN, KC_RGHT, RALT(KC_6), KC_TRNS,
        KC_NO,               KC_CAPS,      KC_LCBR,      KC_RCBR,       KC_TRNS,          KC_TRNS,           KC_DEL,         KC_HOME, KC_END,  KC_MNXT, KC_VOLU,    KC_MUTE,
        KC_TRNS,             KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_TRNS,          KC_TRNS,           KC_BSPC,        KC_DEL,  KC_TRNS, KC_MPRV, KC_VOLD,    KC_MPLY
        ),
    [_COLEMAK_NUMPAD] = LAYOUT(
        KC_GRV,              KC_1,         KC_2,         KC_3,          KC_4,             KC_5,              KC_6,           KC_7,    KC_8,    KC_9,    KC_0,       KC_MINS,
        KC_NO,               KC_NO,        KC_NO,        KC_NO,         KC_NO,            KC_NO,             KC_NO,          KC_7,    KC_8,    KC_9,    KC_PMNS,    KC_NO,
        KC_NO,               KC_NO,        KC_NO,        KC_NO,         KC_NO,            KC_NO,             KC_DOT,         KC_4,    KC_5,    KC_6,    KC_PPLS,    KC_NO,
        KC_NO,               KC_NO,        KC_NO,        KC_NO,         KC_NO,            KC_NO,             KC_0,           KC_1,    KC_2,    KC_3,    KC_PEQL,    KC_NO,
        KC_TRNS,             KC_NO,        KC_NO,        KC_TRNS,       KC_TRNS,          KC_TRNS,           KC_TRNS,        KC_0,    KC_NO,   KC_DOT,  KC_NO,      KC_NO
        ),
    [_COLEMAK_SYMBOLS] = LAYOUT(
        KC_GRV,              KC_1,         KC_2,         KC_3,          KC_4,             KC_5,              KC_6,           KC_7,    KC_8,    KC_9,    KC_0,       KC_MINS,
        RALT(KC_5),          KC_BSLS,      KC_AMPERSAND, KC_ASTERISK,   KC_PLUS,          KC_PERCENT,        KC_F12,         KC_F7,   KC_F8,   KC_F9,   KC_NO,      LCTL(LALT(KC_DEL)),
        KC_TRNS,             KC_MINS,      KC_DOLLAR,    KC_UNDERSCORE, KC_GRV,           KC_CIRC,           KC_F11,         KC_F4,   KC_F5,   KC_F6,   KC_NO,      KC_NO,
        KC_TRNS,             KC_PIPE,      KC_EXCLAIM,   KC_AT,         KC_EQL,           KC_HASH,           KC_F10,         KC_F1,   KC_F2,   KC_F3,   KC_NO,      KC_NO,
        KC_TRNS,             KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_TRNS,          KC_TRNS,           KC_TRNS,        KC_TRNS, KC_NO,   KC_NO,   KC_NO,      KC_TRNS
        ),
};
