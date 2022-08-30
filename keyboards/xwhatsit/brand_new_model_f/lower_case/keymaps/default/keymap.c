#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM_SYM,
  _NAV,
  _FUNCTION
};

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [_BASE] = LAYOUT_all(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, RSFT_T(KC_DOT), KC_NO, KC_LCTL, KC_NO, LT(_NUM_SYM,KC_SPC), KC_NO, LT(_NAV,KC_BSPC), KC_NO),
//   [_NUM_SYM] = LAYOUT_all(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TAB, KC_S, KC_D, KC_F, KC_LT, KC_GT, KC_MINS, KC_EQL, KC_GRV, KC_QUOT, KC_LCBR, KC_LBRC, KC_LPRN, KC_SCLN, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_NO, LT(_FUNCTION,KC_NO), KC_NO),
//   [_NAV] =LAYOUT_all(KC_GESC, KC_UP, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_LCAP, KC_LCTL, KC_LALT, KC_DEL, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
//   [_FUNCTION] = LAYOUT_all(HPT_TOG, HPT_RST, HPT_FBK, HPT_DWLI, HPT_DWLD, RESET, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [_BASE] = LAYOUT_all(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_NO, KC_DOT, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC)
[_BASE] = LAYOUT_all(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_NO, RSFT_T(KC_DOT), KC_LCTL, KC_NO, KC_NO, KC_NO, LT(_NUM_SYM,KC_SPC), KC_NO, KC_NO, KC_NO, KC_NO, LT(_NAV,KC_BSPC)),
[_NUM_SYM] = LAYOUT_all(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TAB, KC_S, KC_D, KC_F, KC_LT, KC_GT, KC_MINS, KC_EQL, KC_GRV, KC_QUOT, KC_LCBR, KC_LBRC, KC_LPRN, KC_SCLN, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, KC_NO, KC_SLSH, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LT(_FUNCTION,KC_NO)),
[_NAV] =LAYOUT_all(KC_GESC, KC_UP, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_LCAP, KC_LCTL, KC_LALT, KC_DEL, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
[_FUNCTION] = LAYOUT_all(HPT_TOG, HPT_RST, HPT_FBK, HPT_DWLI, HPT_DWLD, RESET, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
