#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _NUMPAD 3

#define KC_GRV_LWR LT(_LOWER, KC_GRV)
#define KC_SPC_LWR LT(_LOWER, KC_SPC)
#define KC_ESC_RSE LT(_RAISE, KC_ESC)
#define KC_MINS_RSE LT(_RAISE, KC_MINS)

#define KC_ENT_CTL CTL_T(KC_ENT)
#define KC_EQL_GUI GUI_T(KC_EQL)
#define KC_BSPC_ALT ALT_T(KC_BSPC)
// #define KC_DEL_ALT ALT_T(KC_DEL)
#define KC_GRV_ALT ALT_T(KC_GRV)
// #define KC_BSLS_ALT ALT_T(KC_BSLS)
#define KC_BSLS_GUI GUI_T(KC_BSLS)
// #define KC_EQL_GUI GUI_T(KC_EQL)
#define KC_F12_CTL CTL_T(KC_F12)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  NUMPAD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      CAPS,    1,       2,       3,       4,       5,                                  6,       7,       8,       9,       0,       DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      TAB,     Q,       W,       E,       R,       T,                                  Y,       U,       I,       O,       P,      F12_CTL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     ESC_RSE,  A,       S,       D,       F,       G,                                  H,       J,       K,       L,       SCLN,    QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      LSFT,    Z,       X,       C,       V,       B,      GRV_LWR,          GRV_ALT,  N,       M,       COMM,    DOT,     SLSH,    RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    BSLS_GUI,BSPC_ALT,ENT_CTL,                   SPC_LWR, MINS_RSE,EQL_GUI
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RGB_TOG, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, KC_INS,                             _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_F12,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_RMOD,RGB_HUI, RGB_SAI, RGB_VAI, KC_MUTE, KC_PSCR,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PLUS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______,          _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_EQL,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  /*[_RAISE] = LAYOUT(*/
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     /*KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,*/
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     /*RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,*/
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     /*RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, KC_UNDS,                            KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, _______,*/
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     /*KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_BRID, KC_MINS, KC_LPRN,          _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,*/
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    /*_______, _______, _______,                   _______, _______, _______*/
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  /*),*/

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_ACL0,                            _______, KC_7,    KC_8,    KC_9,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_ACL1,                            _______, KC_4,    KC_5,    KC_6,    KC_0,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_WH_L, KC_BTN3, KC_WH_R, _______, KC_ACL2, _______,          _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _NUMPAD);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _NUMPAD);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _NUMPAD);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _NUMPAD);
      }
      return false;
      break;
  }
  return true;
}


uint32_t layer_state_set_user(uint32_t state) {
	switch (biton32(state)) {
		case _LOWER:
			/*rgblight_setrgb (0x00, 0x00, 0xFF);*/
			break;
	}
	return state;
}
