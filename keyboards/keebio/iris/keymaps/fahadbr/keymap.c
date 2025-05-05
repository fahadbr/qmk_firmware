#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _NUMPAD 3
#define _MOUSE 4

// mod definitions
#define M1 SFT_T
#define M2 ALT_T
#define M3 GUI_T
#define M4 CTL_T
#define M5 LCAG_T

// left side
#define KC_LTH4 LM(_NUMPAD, MOD_LGUI)
#define KC_LTH1 LT(_LOWER, KC_ENT)
#define KC_LTH2 LT(_NUMPAD, KC_MINS)
// #define KC_LTH1 LT(_LOWER, KC_MINS)
// #define KC_LTH2 LT(_NUMPAD, KC_ENT)
#define KC_LTH3 GUI_T(KC_SPC)
#define KC_A_M1 M1(KC_A)
#define KC_S_M2 M2(KC_S)
#define KC_D_M3 M3(KC_D)
#define KC_F_M4 M4(KC_F)
#define KC_G_M5 M5(KC_G)
#define KC_0_M1 M1(KC_0)
#define KC_4_M2 M2(KC_4)
#define KC_5_M3 M3(KC_5)
#define KC_6_M4 M4(KC_6)
#define KC_LCBR_M1 M1(KC_LCBR)
#define KC_RCBR_M2 M2(KC_RCBR)
#define KC_LBRC_M3 M3(KC_LBRC)
#define KC_RBRC_M4 M4(KC_RBRC)
#define KC_ESC_X CTL_T(KC_ESC)
#define KC_CAPS_X LT(_RAISE, KC_CAPS)
#define KC_MINS_X LT(_RAISE, KC_MINS)

// right side
#define KC_RTH4 TG(_MOUSE)
#define KC_RTH1 LT(_LOWER, KC_BSPC)
#define KC_RTH2 LT(_NUMPAD, KC_SPC)
// #define KC_RTH1 LT(_LOWER, KC_GRV)
// #define KC_RTH2 LT(_NUMPAD, KC_SPC)
#define KC_RTH3 GUI_T(KC_EQL)
#define KC_H_M5 M5(KC_H)
#define KC_J_M4 M4(KC_J)
#define KC_K_M3 M3(KC_K)
#define KC_L_M2 M2(KC_L)
#define KC_SCLN_M1 M1(KC_SCLN)
#define KC_LEFT_M5 M5(KC_LEFT)
#define KC_DOWN_M4 M4(KC_DOWN)
#define KC_UP_M3 M3(KC_UP)
#define KC_RGHT_M2 M2(KC_RGHT)
#define KC_PLUS_M1 M1(KC_PLUS)
#define KC_QUOT_X SFT_T(KC_QUOT)

#define KC_QUOT_CAP TD(CAPS)

#define KC________ _______

enum tap_dances {
  CAPS = 0,
};

// Commented because i have disabled tap dancing
// qk_tap_dance_action_t tap_dance_actions[] = {
//   [CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_CAPS),
// };

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  NUMPAD,
  MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_CAPS_X,  KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                                  KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS_X,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                                  KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_ESC_X,   KC_A_M1,    KC_S_M2,    KC_D_M3,    KC_F_M4,    KC_G_M5,                               KC_H_M5,    KC_J_M4,    KC_K_M3,    KC_L_M2,   KC_SCLN_M1,  KC_QUOT_X,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_LTH4,             KC_RTH4,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    SFT_T(KC_ENT),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_LTH3,    KC_LTH2,    KC_LTH1,                      KC_RTH1,    KC_RTH2,    KC_RTH3
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______,  KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                                 KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_INS,     KC_EXLM,    KC_AT,     KC_HASH,     KC_DLR,     KC_PERC,                               KC_CIRC,    KC_AMPR,   KC_ASTR,     KC_LPRN,    KC_RPRN,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_BSPC,     _______,   _______, KC_LBRC_M3, KC_RBRC_M4,  KC_GRV,                               KC_LEFT_M5, KC_DOWN_M4,  KC_UP_M3,  KC_RGHT_M2,  KC_PIPE,    KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_PSCR,   KC_LBRC,     KC_RBRC,    KC_LCBR,    KC_RCBR,    KC_TILD,     _______,            _______,  KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_BSLS,     _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_PIPE,    KC_UNDS,     _______,                    KC_DEL,     KC_TILD,    KC_PLUS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, QK_BOOT,     _______,   _______,   _______,   _______,                              _______,   _______,   _______,   _______,   QK_BOOT,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     UG_TOGG, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     UG_NEXT, UG_HUEU, UG_SATU, UG_VALU, KC_MUTE,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     UG_PREV, UG_HUED, UG_SATD, UG_VALD,   _______,   _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_MPRV, KC_MPLY, KC_MNXT,                     _______,   _______,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMPAD] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______,   _______,   _______,   _______,   _______,   _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,   _______, KC_7,       KC_8,       KC_9,         _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_0_M1,    KC_4_M2,    KC_5_M3,    KC_6_M4,      _______,                              _______,   _______,   _______,   _______,   _______,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______,   _______, KC_1,       KC_2,       KC_3,         _______,   _______,            _______,   _______,   _______,   _______,   _______,   _______,   _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, KC_0,         _______,                     _______,   _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [_MOUSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
   TG(_MOUSE),_______, _______, _______, _______, _______,                            KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,TG(_MOUSE),
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_ACL0, KC_ACL1, KC_ACL2,                   KC_BTN3, KC_BTN1, KC_BTN2
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//       break;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _NUMPAD);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _NUMPAD);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _NUMPAD);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _NUMPAD);
//       }
//       return false;
//       break;
//   }
//   return true;
// }

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    default:
      return TAPPING_TERM_CUSTOM;
  }
}
