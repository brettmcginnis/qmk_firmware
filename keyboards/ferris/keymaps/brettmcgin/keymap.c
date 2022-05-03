#include QMK_KEYBOARD_H

enum ferris_layers {
  _IRST,
  _LOWER,
  _RAISE,
  _ADJUST
};


// Build: qmk compile -kb ferris/sweep -km brettmcgin
// TODO: Figure out why the right hand is inverted
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_IRST] = LAYOUT(
    KC_Y, KC_C, KC_L, KC_M, KC_K,            KC_BSPC, KC_QUOT, KC_U, KC_F, KC_Z,
    LCTL_T(KC_I), LOPT_T(KC_S), LCMD_T(KC_R), LSFT_T(KC_T), KC_G,            RCTL_T(KC_O), ROPT_T(KC_A), RCMD_T(KC_E), RSFT_T(KC_N), KC_P,
    KC_Q, KC_V, KC_W, KC_D, KC_J,            KC_X, KC_DOT, KC_SLSH, KC_H, KC_B,
    MO(_ADJUST), MO(_LOWER), MO(_RAISE), KC_SPC
  ),

  [_RAISE] = LAYOUT(
    KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO,            KC_BSPC, KC_END, KC_UP, KC_HOME, KC_NO,
    LCTL_T(KC_ESC), KC_LOPT, KC_LCMD, KC_LSFT, KC_NO,          KC_ENTER, KC_RIGHT, KC_DOWN, KC_LEFT, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_PGDN, KC_NO, KC_PGUP, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  
  ),

  [_LOWER] = LAYOUT(
    KC_TAB, KC_GRV, KC_MINUS, KC_LCBR, KC_RCBR,           KC_BSPC, KC_3, KC_2, KC_1, KC_DOT,
    LCTL_T(KC_ESC), LOPT_T(KC_COMMA), LCMD_T(KC_DOT), KC_LSPO, KC_RPRN,         RCTL_T(KC_ENTER), ROPT_T(KC_6), RCMD_T(KC_5), RSFT_T(KC_4), KC_0,
    KC_NO, KC_BSLS, KC_EQL, KC_LBRC, KC_RBRC,         KC_SEMICOLON, KC_9, KC_8, KC_7, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_ADJUST] = LAYOUT(
    KC_TAB, KC_MEDIA_PREV_TRACK, KC_MPLY, KC_MEDIA_NEXT_TRACK, KC_VOLU,           KC_BSPC, KC_F4, KC_F3, KC_F2, KC_BSPC,
    LCTL_T(KC_ESC), KC_LOPT, KC_LCMD, KC_LSFT, KC_VOLD,         RCTL_T(KC_ENTER), ROPT_T(KC_F8), RCMD_T(KC_F7), RSFT_T(KC_F6), KC_F5,
    RESET,   DEBUG, KC_NO, KC_NO, KC_NO,         KC_NO, KC_F12, KC_F11, KC_F10, KC_F9,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};
 