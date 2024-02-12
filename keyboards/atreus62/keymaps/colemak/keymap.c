// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "keycodes.h"
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _COLEMAK 0
#define _COLEMAK_MOD1 1
#define _COLEMAK_NUMPAD 2
#define _COLEMAK_SYMBOLS 3
#define _AZERTY 4
#define _AZERTY_MOD1 5
#define _AZERTY_ACCENTS 6
#define _AZERTY_MAJ 7
#define _AZERTY_NUMPAD 8
#define _AZERTY_SYMBOLS 9
#define _AZERTY_SYMBOLS_MAJ 10
#define _FN 11
#define _QWERTY 12

// Tap Dance declarations
enum {
    TD_LSFT_LALT = 0
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_LSFT_LALT] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_LALT)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_TAB,              KC_Q,          KC_W,       KC_F,          KC_P,                    KC_B,                            KC_J,           KC_L,                KC_U,       KC_Y,          KC_SCLN,      KC_LBRC,
         LCTL_T(KC_ESC),      KC_A,          KC_R,       KC_S,          KC_T,                    KC_G,                            KC_K,           KC_N,                KC_E,       KC_I,          KC_O,         KC_QUOT,
         KC_LSFT,             KC_Z,          KC_X,       KC_C,          KC_D,                    KC_V,                            KC_M,           KC_H,                KC_COMM,    KC_DOT,        KC_SLSH,      KC_ENT,
         MO(_COLEMAK_NUMPAD), KC_LCTL,       KC_LALT,    KC_LGUI,       TD(TD_LSFT_LALT),                 MO(_COLEMAK_MOD1), KC_NO, KC_NO, KC_SPC,         KC_RALT,             KC_RCTL,    KC_PGUP,       KC_PGDN,      MO(_COLEMAK_SYMBOLS)
        ),
    [_COLEMAK_MOD1] = LAYOUT(
         KC_GRV,              KC_F1,         KC_F2,      KC_F3,         KC_F4,                   KC_F5,                           KC_F6,          KC_F7,               KC_F8,      KC_F9,         KC_F10,        KC_F11,
         QK_BOOT,             LSFT(KC_TAB),  KC_LBRC,    KC_RBRC,       KC_TRNS,                 LALT(KC_TAB),                    LALT(KC_RIGHT), KC_PGUP,             KC_UP,      KC_PGDN,       KC_SCROLL_LOCK,KC_F12,
         KC_TRNS,             KC_TAB,        KC_LPRN,    KC_RPRN,       KC_ENT,                  KC_APPLICATION,                  LALT(KC_LEFT),  KC_LEFT,             KC_DOWN,    KC_RGHT,       TO(_COLEMAK), TO(_AZERTY),
         KC_NO,               KC_CAPS,       KC_LCBR,    KC_RCBR,       KC_TRNS,                 KC_TRNS,                         KC_DEL,         KC_HOME,             KC_END,     KC_MNXT,       KC_VOLU,      KC_MUTE,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,           KC_NO, KC_NO, KC_BSPC,        KC_DEL,              KC_TRNS,    KC_MPRV,       KC_VOLD,      KC_MPLY
        ),
    [_COLEMAK_NUMPAD] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_NO,          KC_7,                KC_8,       KC_9,          KC_PMNS,      KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_DOT,         KC_4,                KC_5,       KC_6,          KC_PPLS,      KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_0,           KC_1,                KC_2,       KC_3,          KC_PEQL,      KC_NO,
         KC_TRNS,             KC_NO,         KC_NO,      KC_TRNS,       KC_TRNS,                 KC_TRNS,           KC_NO, KC_NO, KC_TRNS,        KC_0,                KC_NO,      KC_DOT,        KC_NO,        KC_NO
        ),
    [_COLEMAK_SYMBOLS] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         RALT(KC_5),          LSFT(KC_BSLS), LSFT(KC_7), LSFT(KC_8),    LSFT(KC_EQL),            LSFT(KC_5),                      KC_F12,         KC_F7,               KC_F8,      KC_F9,         KC_NO,        LCTL(LALT(KC_DEL)),
         KC_TRNS,             KC_MINS,       LSFT(KC_4), LSFT(KC_MINS), KC_GRV,                  LSFT(KC_6),                      KC_F11,         KC_F4,               KC_F5,      KC_F6,         KC_NO,        KC_NO,
         KC_TRNS,             KC_BSLS,       LSFT(KC_1), LSFT(KC_2),    KC_EQL,                  LSFT(KC_3),                      KC_F10,         KC_F1,               KC_F2,      KC_F3,         KC_NO,        KC_NO,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,           KC_NO, KC_NO, KC_TRNS,        KC_TRNS,             KC_NO,      KC_NO,         KC_NO,        KC_TRNS
        ),
    [_AZERTY] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_TAB,              KC_A,          KC_Z,       KC_F,          KC_P,                    KC_B,                            KC_J,           KC_L,                KC_U,       KC_Y,          KC_COMM,      RALT(KC_5),
         LCTL_T(KC_ESC),      KC_Q,          KC_R,       KC_S,          KC_T,                    KC_G,                            KC_K,           KC_N,                KC_E,       KC_I,          KC_O,         KC_4,
         KC_LSFT,             KC_W,          KC_X,       KC_C,          KC_D,                    KC_V,                            KC_SCLN,        KC_H,                KC_M,       LSFT(KC_COMM), LSFT(KC_DOT), KC_ENT,
         MO(_AZERTY_NUMPAD),  KC_LCTL,       KC_LALT,    KC_LGUI,       MO(_AZERTY_MAJ),         MO(_AZERTY_MOD1),  KC_NO, KC_NO, KC_SPC,         MO(_AZERTY_ACCENTS), KC_RCTL,    KC_PGUP,       KC_PGDN,      MO(_AZERTY_SYMBOLS)
        ),
    [_AZERTY_MOD1] = LAYOUT(
         KC_GRV,              KC_F1,         KC_F2,      KC_F3,         KC_F4,                   KC_F5,                           KC_F6,          KC_F7,               KC_F8,      KC_F9,         KC_F10,        KC_F11,
         QK_BOOT,             LSFT(KC_TAB),  RALT(KC_5), RALT(KC_MINS), KC_TRNS,                 LALT(KC_TAB),                    KC_NO,          KC_PGUP,             KC_UP,      KC_PGDN,       KC_SCROLL_LOCK,KC_F12,
         KC_TRNS,             KC_TAB,        KC_5,       KC_MINS,       KC_ENT,                  KC_APPLICATION,                  KC_NO,          KC_LEFT,             KC_DOWN,    KC_RGHT,       TO(_COLEMAK), TO(_AZERTY),
         KC_TRNS,             KC_CAPS,       RALT(KC_4), RALT(KC_EQL),  KC_TRNS,                 KC_TRNS,                         KC_DEL,         KC_HOME,             KC_END,     KC_MNXT,       KC_VOLU,      KC_MUTE,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,           KC_NO, KC_NO, KC_BSPC,        KC_DEL,              KC_TRNS,    KC_MPRV,       KC_VOLD,      KC_MPLY
        ),
    [_AZERTY_ACCENTS] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_NO,          KC_NO,               KC_QUOT,    KC_NO,         KC_NO,        KC_LBRC,
         KC_NO,               KC_0,          KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_NO,          KC_NO,               KC_2,       KC_NO,         KC_NO,        KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_9,          KC_NO,                   KC_NO,                           KC_NO,          KC_NO,               KC_7,       KC_NO,         KC_NO,        KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,             KC_NO, KC_NO, KC_NO,          KC_TRNS,             KC_NO,      KC_NO,         KC_NO,        KC_NO
        ),
    [_AZERTY_MAJ] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_NO,               LSFT(KC_A),    LSFT(KC_Z), LSFT(KC_F),    LSFT(KC_P),              LSFT(KC_B),                      LSFT(KC_J),     LSFT(KC_L),          LSFT(KC_U), LSFT(KC_Y),    KC_DOT,       RALT(KC_4),
         KC_NO,               LSFT(KC_Q),    LSFT(KC_R), LSFT(KC_S),    LSFT(KC_T),              LSFT(KC_G),                      LSFT(KC_K),     LSFT(KC_N),          LSFT(KC_E), LSFT(KC_I),    LSFT(KC_O),   KC_3,
         KC_NO,               LSFT(KC_W),    LSFT(KC_X), LSFT(KC_C),    LSFT(KC_D),              LSFT(KC_V),                      LSFT(KC_SCLN),  LSFT(KC_H),          KC_NUBS,    LSFT(KC_NUBS), LSFT(KC_M),   KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_TRNS,                 KC_NO,             KC_NO, KC_NO, KC_NO,          KC_NO,               KC_NO,      KC_NO,         KC_NO,        KC_TRNS
        ),
    [_AZERTY_NUMPAD] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_NO,          LSFT(KC_7),          LSFT(KC_8), LSFT(KC_9),    KC_PMNS,      KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           LSFT(KC_COMM),  LSFT(KC_4),          LSFT(KC_5), LSFT(KC_6),    KC_PPLS,      KC_NO,
         KC_NO,               KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_NO,                           KC_NO,          LSFT(KC_1),          LSFT(KC_2), LSFT(KC_3),    KC_EQL,       KC_NO,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,           KC_NO, KC_NO, KC_TRNS,        LSFT(KC_0),          KC_NO,      KC_NO,         KC_NO,        KC_TRNS
        ),
    [_AZERTY_SYMBOLS] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_TRNS,             RALT(KC_8),    KC_1,       KC_BSLS,       LSFT(KC_EQL),            LSFT(KC_QUOT),                   KC_F12,         KC_F7,               KC_F8,      KC_F9,         KC_NO,        LCTL(LALT(KC_DEL)),
         KC_TRNS,             KC_6,          KC_RBRC,    KC_8,          RALT(KC_2),              RALT(KC_9),                      KC_F11,         KC_F4,               KC_F5,      KC_F6,         KC_NO,        KC_NO,
         KC_TRNS,             RALT(KC_6),    KC_SLSH,    RALT(KC_0),    KC_EQL,                  RALT(KC_3),                      KC_F10,         KC_F1,               KC_F2,      KC_F3,         KC_NO,        KC_NO,
         KC_TRNS,             KC_NO,         KC_NO,      KC_NO,         MO(_AZERTY_SYMBOLS_MAJ), KC_NO,             KC_NO, KC_NO, KC_TRNS,        KC_TRNS,             KC_NO,      KC_NO,         KC_NO,        KC_TRNS
        ),
    [_AZERTY_SYMBOLS_MAJ] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_TRNS,             RALT(KC_8),    KC_1,       KC_BSLS,       LSFT(KC_EQL),            LSFT(KC_QUOT),                   KC_F12,         KC_F7,               KC_F8,      KC_F9,         KC_NO,        LCTL(LALT(KC_DEL)),
         KC_TRNS,             KC_6,          KC_RBRC,    KC_8,          RALT(KC_7),              RALT(KC_9),                      KC_F11,         KC_F4,               KC_F5,      KC_F6,         KC_NO,        KC_NO,
         KC_TRNS,             RALT(KC_6),    KC_SLSH,    RALT(KC_0),    KC_EQL,                  RALT(KC_3),                      KC_F10,         KC_F1,               KC_F2,      KC_F3,         KC_NO,        KC_NO,
         KC_TRNS,             KC_NO,         KC_NO,      KC_NO,         KC_NO,                   KC_TRNS,           KC_NO, KC_NO, KC_TRNS,        KC_TRNS,             KC_NO,      KC_NO,         KC_NO,        KC_TRNS
        ),
    [_FN] = LAYOUT(
         KC_GRV,              KC_1,          KC_2,       KC_3,          KC_4,                    KC_5,                            KC_6,           KC_7,                KC_8,       KC_9,          KC_0,         KC_MINS ,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,                         KC_F12,         KC_F7,               KC_F8,      KC_F9,         KC_PMNS,      KC_TRNS,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,                         KC_F11,         KC_F4,               KC_F5,      KC_F6,         KC_TRNS,      KC_TRNS,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,                         KC_F10,         KC_F1,               KC_F2,      KC_F3,         KC_TRNS,      KC_TRNS,
         KC_TRNS,             KC_TRNS,       KC_TRNS,    KC_TRNS,       KC_TRNS,                 KC_TRNS,           KC_NO, KC_NO, KC_TRNS,        KC_0,                KC_TRNS,    KC_DOT,        KC_TRNS,      KC_TRNS
        )
};
