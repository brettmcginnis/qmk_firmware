// https://notgate.github.io/layout/
// https://github.com/callum-oakley/qmk_firmware/tree/master/users/callum
// https://docs.qmk.fm/#/keycodes

// Macros
// Chrome, Slack, Android Studio, VS Code

#include QMK_KEYBOARD_H

enum preonic_layers {
  _IRST,
  _LOWER,
  _RAISE,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Default: ISRT
  * ,-----------------------------------------------------------------------------------.
  * |   Y  |   C  |   L  |   M  |   K  |  __  |  __  |   Z  |   F  |   U  |  '"  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |  I ^ | S ⌥  | R  ⌘ |  T ⇧ |   G  |  __  |  __  |   P  |  N ⇧ |  E	⌘ |  A ⌥ | O ^  |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |   Q  |   V  |   W  |   D  |   J  |  __  |  __  |   B  |   H  |  /?  |   .  |   X  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |  __  |  __  |  __  |Adjust|Lower |             |Space |Raise |  __  |  __  |  __  |
  * `-----------------------------------------------------------------------------------'
  */
[0] = LAYOUT_preonic_grid(
  KC_Y, KC_C, KC_L, KC_M, KC_K, KC_NO, KC_NO, KC_Z, KC_F, KC_U, KC_QUOT, KC_BSPC,
  LCTL_T(KC_I), LOPT_T(KC_S), LCMD_T(KC_R), LSFT_T(KC_T), KC_G, KC_NO, KC_NO, KC_P, RSFT_T(KC_N), RCMD_T(KC_E), ROPT_T(KC_A), RCTL_T(KC_O),
  KC_Q, KC_V, KC_W, KC_D, KC_J, KC_NO, KC_NO, KC_B, KC_H, KC_SLSH, KC_DOT, KC_X,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, MO(_ADJUST), MO(_LOWER), KC_NO, KC_NO, KC_SPC, MO(_RAISE), KC_NO, KC_NO, KC_NO
),

/* Raise: Navigation
  * ,-----------------------------------------------------------------------------------.
  * |  Tab |      |      |      |      |  __  |  __  |      | Home |  Up  | End  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |Esc ^ |   ⌥  |    ⌘ |    ⇧ |      |  __  |  __  |      | Left | Down |Right | Enter|
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |      |      |      |      |      |  __  |  __  |      |PageUp|      |PageDo|      |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |  __  |  __  |  __  |      |      |             |Space |      |  __  |  __  |  __  |
  * `-----------------------------------------------------------------------------------'
  */
[_RAISE] = LAYOUT_preonic_grid(
  KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_BSPC,
  LCTL_T(KC_ESC), KC_LOPT, KC_LCMD, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO,KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENTER,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_PGDN, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
),

/* Lower: Numbers / Symbol
  * ,-----------------------------------------------------------------------------------.
  * |  Tab |  `~  |  -_  |  {   |   }  |  __  |  __  |  .   |  1!  |  2@  |  3#  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |ESC ^ | ,< ⌥ | .> ⌘ |  (⇧  |   )  |  __  |  __  |  0   | 4$ ⇧ | 5% ⌘ | 6^ ⌥ |Enter^|
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |      |  \|  |  =+  |  [   |   ]  |  __  |  __  |      |  7&  |  8*  |  9   |  ;:  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |  __  |  __  |  __  |      |      |             |Space |      |  __  |  __  |  __  |
  * `-----------------------------------------------------------------------------------'
  */
[_LOWER] = LAYOUT_preonic_grid(
  KC_TAB, KC_GRV, KC_MINUS, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_DOT, KC_1, KC_2, KC_3, KC_BSPC,
  LCTL_T(KC_ESC), LOPT_T(KC_COMMA), LCMD_T(KC_DOT), KC_LSPO, KC_RPRN, KC_NO, KC_NO, KC_0, RSFT_T(KC_4), RCMD_T(KC_5), ROPT_T(KC_6), RCTL_T(KC_ENTER),
  KC_NO, KC_BSLS, KC_EQL, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_SEMICOLON,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
),

/* Adjust: Media / Function
  * ,-----------------------------------------------------------------------------------.
  * | Tab  |   ⏮ |   ️⏯ |   ⏭  | Vol+ |  __  |  __  | fn1  | fn2  | fn3  | fn4  | Bksp |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |Esc ^ |   ⌥  |   ⌘  |   ⇧  |      |  __  |  __  | fin5 |fn6 ⇧ |fn7 ⌘ |fn8 ⌥ |Enter^|
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |Reset |Debug |      |      |      |  __  |  __  | fn9  | fn10 | fn11 | fn12 |      |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |  __  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |  __  |  __  |  __  |      |      |             |Space |      |  __  |  __  |  __  |
  * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid(
  KC_TAB, KC_MEDIA_PREV_TRACK, KC_MPLY, KC_MEDIA_NEXT_TRACK, KC_VOLU, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_BSPC,
  LCTL_T(KC_ESC), KC_LOPT, KC_LCMD, KC_LSFT, KC_VOLD, KC_NO, KC_NO, KC_F5, RSFT_T(KC_F6), RCMD_T(KC_F7), ROPT_T(KC_F8), RCTL_T(KC_ENTER),
  RESET,   DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,
  KC_NO, KC_NO,KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
)
};
