/* Copyright 2019 gtips
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layer_names {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)

#define RA_DEL LT(RAISE, KC_DEL)
#define SF_BSP SFT_T(KC_BSPC)
#define CT_SP  CTL_T(KC_SPC)
#define LO_T   LT(LOWER, KC_TAB)
#define LG_KCZ  MT(MOD_LGUI, KC_Z)
#define RA_SL RALT_T(KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    LG_KCZ,  KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,   RA_SL,
                               LO_T,    CT_SP,         SF_BSP,  RA_DEL
  ),

  [_LOWER] = LAYOUT(
    KC_ESC,   KC_HOME, KC_UP,   KC_END,   KC_LALT,     KC_LPRN, KC_RPRN, KC_WH_U, KC_MS_U, KC_WH_D,
    KC_VOLU,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP,     KC_LBRC, KC_RBRC, KC_MS_L, KC_MS_D, KC_MS_R,
    KC_VOLD,  KC_MPRV, KC_MPLY, KC_MNXT,  KC_PGDN,     KC_LCBR, KC_RCBR, KC_BTN1, KC_BTN3,  KC_BTN2,
                                _______,  _______,     KC_ENT,  _______ 
  ),
  
  [_RAISE] = LAYOUT(
    KC_EXLM,    KC_AT,    KC_HASH, KC_DLR,  KC_PERC,      KC_PLUS, KC_7,     KC_8,   KC_9, KC_0,
    KC_CIRC,    KC_AMPR,  KC_TILD, KC_PIPE, KC_BSLS,      KC_MINUS,  KC_4,     KC_5,   KC_6, KC_EQL,
    KC_DQT,     KC_QUOT,  KC_UNDS, KC_GRV,  _______,      KC_ASTR,  KC_1,     KC_2,   KC_3, KC_SLSH,
                                   _______, _______,  _______,  _______
  ),

  [_ADJUST] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,         KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR,
    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F11,  KC_F12,  KC_CAPS, XXXXXXX, XXXXXXX,       RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______,       _______, _______
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
