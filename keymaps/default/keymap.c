// Copyright 2021 Muhammad Rafli Ardiansyah (@rafliard23)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum layer_names {
  LAYER_BASE,
  LAYER_DEBUG,
  LAYER_PREMPRO,
  LAYER_OBS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER_BASE] = LAYOUT_RFR(                 \
  KC_P7,   KC_P8,   KC_P9,   KC_MPLY,    \
  KC_P4,   KC_P5,   KC_P6,   KC_PMNS,    \
  KC_P1,   KC_P2,   KC_P3,   KC_PPLS,    \
  KC_NLCK, KC_P0,   KC_PDOT, KC_PENT     ),

  [LAYER_PREMPRO] = LAYOUT_RFR(              \
  KC_C,    KC_V,    KC_H,    KC_SPC,     \
  KC_ENT,  C(KC_C), C(KC_X), C(KC_V),    \
  C(KC_Z), C(S(KC_Z)),  KC_EQL, KC_MINS, \
  C(KC_S), C(KC_O), C(KC_I), C(KC_M)     ),

  [LAYER_OBS] = LAYOUT_RFR(                                        \
  C(S(KC_1)),  C(S(KC_2)),  C(S(KC_3)),  KC_SPC,               \
  C(S(KC_4)),  C(S(KC_5)),  C(S(KC_6)),  C(S(KC_7)),           \
  C(S(KC_8)),  C(S(KC_9)),  C(S(KC_0)),  C(S(KC_COMM)),        \
  C(S(KC_DOT)), C(S(KC_MINS)), C(S(KC_EQL)), C(S(KC_SLSH))     ),
  
  [LAYER_DEBUG] = LAYOUT_RFR(                \
  KC_P7,   KC_P8,   KC_P9,   KC_MPLY,    \
  KC_P4,   KC_P5,   KC_P6,   KC_PMNS,    \
  KC_P1,   KC_P2,   KC_P3,   KC_PPLS,    \
  KC_NLCK, KC_P0,   KC_PDOT, KC_PENT     )
};

/*
bool dip_switch_update_user(uint8_t index, bool active) {
  if (index == 0) {
    if (active) { layer_move(LAYER_BASE); } else { layer_off(LAYER_BASE); }
  } else if (index == 1) {
	if (active) { layer_move(LAYER_PREMPRO); } else { layer_off(LAYER_PREMPRO); }
  } else if (index == 2) {
	if (active) { layer_move(LAYER_OBS); } else { layer_off(LAYER_OBS); }
  } else if (index == 3) {
	if (active) { layer_move(LAYER_DEBUG); } else { layer_off(LAYER_DEBUG); }
  }
  return true;
}
*/

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (IS_LAYER_ON(LAYER_BASE)) {
		if (clockwise) { tap_code(KC_VOLU); } else { tap_code(KC_VOLD); }
	} else if (IS_LAYER_ON(LAYER_PREMPRO)) {
		if (clockwise) { tap_code16(LSFT(KC_WH_D)); } else { tap_code16(LSFT(KC_WH_U)); }
	} else if (IS_LAYER_ON(LAYER_OBS)) {
		if (clockwise) { tap_code16(LCTL(LSFT(KC_PGUP))); } else { tap_code16(LCTL(LSFT(KC_PGDN))); }
	}
  }
  return true;
}

bool dip_switch_update_user(uint8_t index, bool active) { 
  switch (index) {
    case 0:
      if(active) { layer_move(LAYER_BASE); } else { layer_off(LAYER_BASE); }
      break;
    case 1:
      if(active) { layer_move(LAYER_PREMPRO); } else { layer_off(LAYER_PREMPRO); }
      break;
    case 2:
      if(active) { layer_move(LAYER_OBS); } else { layer_off(LAYER_OBS); }
      break;
    case 3:
      if(active) { layer_move(LAYER_DEBUG); } else { layer_off(LAYER_DEBUG); }
      break;
  }
 return true;
}