// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names{
  _BASE,
  _NUM,
  _CODE
};

#define NUM   TT(_NUM)
#define CODE  TT(_CODE)

#define QUM LSFT(KC_MINS)
#define EUR RALT(KC_E)
#define QUM LSFT(KC_MINS)
#define SLSH KC_SLSH

/*
TODO:
- rename Num Layer
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* BASE: DONE
  * ,-----------------------------------------------------------------------------------.
  * | ESC  |   Q  |   W  |   E  |   R  |   T  |   Z  |   U  |   I  |   O  |   P  | DEL  |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | TAB  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   /  | RET  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | SHIFT|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |  '   |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | LOCK | CTRL | ALT  | CMD  | NUM  |    SPACE    | CODE | LEFT |  UP  | DOWN |RIGHT |
  * `-----------------------------------------------------------------------------------'
  */
  [_BASE]= LAYOUT_ortho_4x12(
      KC_ESC,  KC_Q,    KC_W,     KC_E,     KC_R,   KC_T,       KC_Z,   KC_U, KC_I,     KC_O,   KC_P,     KC_BSPC,
      KC_TAB,  KC_A,    KC_S,     KC_D,     KC_F,   KC_G,       KC_H,   KC_J, KC_K,     KC_L,   SLSH,   KC_ENT,
      KC_LSFT, KC_Z,    KC_X,     KC_C,     KC_V,   KC_B,       KC_N,   KC_M, KC_COMM,  KC_DOT, KC_MINS,  KC_QUOT,
      QK_LOCK, KC_LCTL, KC_LALT,  KC_LGUI,  NUM,    KC_SPC,     KC_SPC, CODE, KC_LEFT,  KC_UP,  KC_DOWN,  KC_RGHT
  ),
  /* NUM: TODO
  * ,-----------------------------------------------------------------------------------.
  * | ESC  |   *  |   +  |   -  |   €  |   ,  |   .  |   /  |      |   =  |  ?   | DEL  |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | TAB  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | RET  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |   F1 |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 | F12  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | LOCK | CTRL | ALT  | CMD  |      |    SPACE    |      | LEFT |  UP  | DOWN |RIGHT |
  * `-----------------------------------------------------------------------------------'
  */
  [_NUM] = LAYOUT_ortho_4x12(
      KC_ESC,   KC_Q,    KC_W,     KC_MINS,  EUR,      KC_COMM,     KC_DOT, SLSH,     _______, KC_EQUAL,QUM,     KC_BSPC,
      KC_TAB,   KC_1,    KC_2,     KC_3,     KC_4,     KC_5,        KC_6,   KC_7,     KC_8,     KC_9,   KC_0,     KC_ENT,
      KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,       KC_F7,  KC_F8,    KC_F9,    KC_F10, KC_F11,   KC_F12,
      QK_LOCK,  KC_LCTL, KC_LALT,  KC_LGUI,  _______, KC_SPC,      KC_SPC, _______, KC_LEFT,  KC_UP,  KC_DOWN,  KC_RGHT
  ),
  /* CODE: TODO
  * ,-----------------------------------------------------------------------------------.
  * | ESC  |   *  |   +  |   -  |   $  |   ,  |   .  |   \  |   @  |      |   ?  | DEL  |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | TAB  |   !  |   "  |  {   |   }  |   [  |   ]  |   /  |   (  |   )  |   =  | RET  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |   <  |   >  |   ;  |   C  |      |      |   ~  |   _  |   %  |   &  |   #  |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | LOCK | CTRL | ALT  | CMD  | NUM  |    SPACE    | CODE | LEFT |  UP  | DOWN |RIGHT |
  * `-----------------------------------------------------------------------------------'
  */
  [_CODE] = LAYOUT_ortho_4x12(
      KC_ESC,  KC_Q,    KC_W,     KC_E,     KC_R,   KC_T,       KC_Z,   KC_U, KC_I,     KC_O,   KC_P,     KC_BSPC,
      KC_TAB,  KC_A,    KC_S,     KC_D,     KC_F,   KC_G,       KC_H,   KC_J, KC_K,     KC_L,   SLSH,   KC_ENT,
      KC_LSFT, KC_Z,    KC_X,     KC_C,     KC_V,   KC_B,       KC_N,   KC_M, KC_COMM,  KC_DOT, KC_MINS,  KC_QUOT,
      QK_LOCK, KC_LCTL, KC_LALT,  KC_LGUI,  NUM,    KC_SPC,     KC_SPC, CODE, KC_LEFT,  KC_UP,  KC_DOWN,  KC_RGHT
  )
};