// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_QUOT, KC_DOT,   KC_SLSH,
    KC_LCTL, KC_LWIN, KC_LALT,                   KC_SPC,                      MO(1),  TG(1)
    ),
    [1] = LAYOUT( /* First */
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  KC_MPRV, KC_MPLY, KC_MNXT, KC_PGUP, KC_UP, KC_MINS, KC_LBRC,  KC_RBRC, KC_BSLS, KC_LGUI,
    KC_LCTL, KC_MINS,    KC_EQL,    KC_LEFT,    KC_DOWN, KC_RIGHT,  KC_SCLN,    KC_QUOT, KC_UP,   _______, _______,
    XXXXXXX, XXXXXXX, KC_LALT,                   _______, _______,                   KC_DOWN, KC_RGHT, XXXXXXX
  )
};
