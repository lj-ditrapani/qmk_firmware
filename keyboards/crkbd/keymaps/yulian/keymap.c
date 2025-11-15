#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM combo_k[] = {LSFT_T(KC_A), LCTL_T(KC_N), COMBO_END};
const uint16_t PROGMEM combo_q[] = {LGUI_T(KC_I), LSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM combo_z[] = {LALT_T(KC_O), LGUI_T(KC_I), COMBO_END};
const uint16_t PROGMEM combo_z2[] = {KC_U, KC_L, COMBO_END};
const uint16_t PROGMEM combo_z3[] = {LGUI_T(KC_I), LCTL_T(KC_N), COMBO_END};
const uint16_t PROGMEM combo_b[] = {RSFT_T(KC_T), RCTL_T(KC_H), COMBO_END};
const uint16_t PROGMEM combo_j[] = {RGUI_T(KC_S), RSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM combo_x[] = {RALT_T(KC_R), RGUI_T(KC_S), COMBO_END};
const uint16_t PROGMEM combo_x2[] = {KC_F, KC_C, COMBO_END};
const uint16_t PROGMEM combo_x3[] = {RCTL_T(KC_H), RGUI_T(KC_S), COMBO_END};
const uint16_t PROGMEM combo_lparen[] = {KC_SLSH, KC_MINS, COMBO_END};
const uint16_t PROGMEM combo_rparen[] = {KC_EXLM, KC_AT, COMBO_END};
const uint16_t PROGMEM combo_lbrack[] = {KC_GT, KC_COLN, COMBO_END};
const uint16_t PROGMEM combo_rbrack[] = {KC_DLR, KC_PERC, COMBO_END};
const uint16_t PROGMEM combo_lcbrck[] = {KC_QUES, KC_UNDS, COMBO_END};
const uint16_t PROGMEM combo_rcbrck[] = {KC_AMPR, KC_ASTR, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_k, KC_K),
    COMBO(combo_q, KC_Q),
    COMBO(combo_z, KC_Z),
    COMBO(combo_z2, KC_Z),
    COMBO(combo_z3, KC_Z),
    COMBO(combo_b, KC_B),
    COMBO(combo_j, KC_J),
    COMBO(combo_x, KC_X),
    COMBO(combo_x2, KC_X),
    COMBO(combo_x3, KC_X),
    COMBO(combo_lparen, KC_LPRN),
    COMBO(combo_rparen, KC_RPRN),
    COMBO(combo_lbrack, KC_LBRC),
    COMBO(combo_rbrack, KC_RBRC),
    COMBO(combo_lcbrck, KC_LCBR),
    COMBO(combo_rcbrck, KC_RCBR),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_QUOT,      KC_Y,         KC_U,         KC_L,         KC_Q, KC_NO,     KC_NO, KC_J, KC_F,         KC_C,         KC_G,         KC_QUES,      KC_NO,
    KC_NO, LALT_T(KC_O), LGUI_T(KC_I), LSFT_T(KC_A), LCTL_T(KC_N), KC_K, KC_NO,     KC_NO, KC_B, RCTL_T(KC_H), RSFT_T(KC_T), RGUI_T(KC_S), RALT_T(KC_R), KC_NO,
    KC_NO, KC_SCLN,      KC_COMM,      KC_DOT,       KC_M,         KC_Z,                   KC_X, KC_D, KC_W, KC_P, KC_V, KC_NO,
    LT(6,KC_ESC), LT(2,KC_E), LT(4,KC_TAB),                                                LT(5,KC_ENT), LT(3,KC_SPC), LT(7,KC_BSPC)
    ),
    [1] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_QUOT,      KC_Y,         KC_U,         KC_L,         KC_Q, KC_NO,     KC_NO, KC_J, KC_F,         KC_C,         KC_G,         KC_QUES,      KC_NO,
    KC_NO, LALT_T(KC_O), LCTL_T(KC_I), LSFT_T(KC_A), LCTL_T(KC_N), KC_K, KC_NO,     KC_NO, KC_B, RCTL_T(KC_H), RSFT_T(KC_T), RCTL_T(KC_S), RALT_T(KC_R), KC_NO,
    KC_NO, KC_SCLN,      KC_COMM,      KC_DOT,       KC_M,         KC_Z,                   KC_X, KC_D,         KC_W,         KC_P,         KC_V,         KC_NO,
    LT(6,KC_ESC), LT(2,KC_E), LT(4,KC_TAB),                                                LT(5,KC_ENT), LT(3,KC_SPC), LT(7,KC_BSPC)
    ),
    [2] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,    KC_NO, KC_TAB, KC_4, KC_5, KC_6, KC_NO, KC_NO,
    KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO, KC_NO,    KC_NO, KC_EQL, KC_1, KC_2, KC_3, KC_0,  KC_NO,
    KC_NO, KC_NO,   KC_NO,   KC_NO,   MS_BTN3, KC_NO,                  KC_DOT, KC_7, KC_8, KC_9, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,                                               KC_ENT, KC_SPC, KC_BSPC
    ),
    [3] = LAYOUT_split_3x6_3_ex2(
    KC_NO, TO(8),   KC_HOME, KC_UP,   KC_END,  TO(3),   KC_NO,      KC_NO, KC_NO, TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO, MS_BTN5, KC_LEFT, KC_DOWN, KC_RGHT, MS_BTN4, KC_NO,      KC_NO, KC_NO, KC_RCTL, KC_RSFT, KC_RGUI, KC_RALT, KC_NO,
    KC_NO, KC_NO,   KC_NO,   KC_PGDN, KC_PGUP, KC_NO,                      KC_NO, TO(1),   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [4] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RBRC, KC_DLR, KC_PERC, KC_CIRC, KC_NO, KC_NO,
    KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_EQL, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCBR, KC_AMPR, KC_ASTR, KC_PLUS, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL
    ),
    [5] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_DQUO, KC_LT, KC_GT, KC_COLN, KC_LBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_GRV, KC_BSLS, KC_SLSH, KC_MINS, KC_LPRN, KC_NO, KC_NO, KC_NO, KC_RCTL, KC_RSFT, KC_RGUI, KC_RALT, KC_NO,
    KC_NO, KC_TILD, KC_PIPE, KC_QUES, KC_UNDS, KC_LCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [6] = LAYOUT_split_3x6_3_ex2(
    KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO,
    KC_NO, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F11
    ),
    [7] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_NO, KC_APP, MS_UP, RM_VALU, RM_VALD, KC_NO, KC_NO, KC_NO, RM_TOGG, RM_SATU, RM_SATD, QK_BOOT, KC_NO,
    KC_NO, MS_BTN5, MS_LEFT, MS_DOWN, MS_RGHT, MS_BTN4, KC_NO, KC_NO, RM_SPDU, KC_RCTL, KC_RSFT, KC_RGUI, KC_RALT, KC_NO,
    KC_NO, KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, RM_SPDD, RM_NEXT, RM_PREV, RM_HUEU, RM_HUED, KC_NO,
    MS_BTN2, MS_BTN1, MS_BTN3, KC_NO, KC_NO, KC_NO
    ),
    [8] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_T, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_NO, KC_Y, KC_U, KC_UP, KC_O, KC_P, KC_NO,
    KC_NO, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_NO, KC_NO, KC_H, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_NO,
    KC_NO, KC_B, KC_Z, KC_X, KC_C, KC_V, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
    MO(9), KC_LSFT, KC_SPC, KC_ESC, TO(0), TO(1)
    ),
    [9] = LAYOUT_split_3x6_3_ex2(
    KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_6, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};

bool get_combo_must_tap(uint16_t combo_index, combo_t *combo) {
    return true;
}
