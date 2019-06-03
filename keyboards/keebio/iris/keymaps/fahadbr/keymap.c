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

// left side
#define KC_LTH4 GUI_T(KC_ENT)
#define KC_LTH1 LT(_LOWER, KC_ENT)
#define KC_LTH2 LT(_NUMPAD, KC_MINS)
#define KC_LTH3 LT(_MOUSE, KC_BSLS)
#define KC_A_M1 M1(KC_A)
#define KC_S_M2 M2(KC_S)
#define KC_D_M3 M3(KC_D)
#define KC_F_M4 M4(KC_F)
#define KC_LCBR_M1 M1(KC_LCBR)
#define KC_RCBR_M2 M2(KC_RCBR)
#define KC_LBRC_M3 M3(KC_LBRC)
#define KC_RBRC_M4 M4(KC_RBRC)
#define KC_ESC_X SFT_T(KC_ESC)
#define KC_CAPS_X LT(_RAISE, KC_CAPS)

// right side
#define KC_RTH4 CTL_T(KC_SPC)
#define KC_RTH1 LT(_LOWER, KC_SPC)
#define KC_RTH2 LT(_NUMPAD, KC_GRV)
#define KC_RTH3 LT(_MOUSE, KC_EQL)
#define KC_J_M4 M4(KC_J)
#define KC_K_M3 M3(KC_K)
#define KC_L_M2 M2(KC_L)
#define KC_SCLN_M1 M1(KC_SCLN)
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

qk_tap_dance_action_t tap_dance_actions[] = {
  [CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_CAPS),
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  NUMPAD,
  MOUSE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      CAPS_X,  1,       2,       3,       4,       5,                                  6,       7,       8,       9,       0,       MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      TAB,     Q,       W,       E,       R,       T,                                  Y,       U,       I,       O,       P,       BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      ESC_X,   A_M1,    S_M2,    D_M3,    F_M4,    G,                                  H,       J_M4,    K_M3,    L_M2,   SCLN_M1,  QUOT_X,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      LSFT,    Z,       X,       C,       V,       B,       LTH4,             RTH4,    N,       M,       COMM,    DOT,     SLSH,    RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     LTH3,    LTH2,    LTH1,                      RTH1,    RTH2,    RTH3
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT_kc(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  F1,      F2,      F3,      F4,      F5,                                 F6,      F7,      F8,      F9,      F10,     F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      INS,     EXLM,    AT,      HASH,    DLR,     PERC,                               CIRC,    AMPR,    ASTR,    LPRN,    RPRN,    F12,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, LBRC_M3, RBRC_M4,  GRV,                                LEFT,   DOWN_M4,  UP_M3,  RGHT_M2, PLUS_M1,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      PSCR,   _______, _______, _______,  UNDS,    TILD,   _______,          _______,  HOME,    PGDN,    PGUP,    END,    _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┤────────┼                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_MUTE, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMPAD] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_7,    KC_8,    KC_9,    _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_4,    KC_5,    KC_6,    KC_0,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_1,    KC_2,    KC_3,    _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  KC_0,   _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [_MOUSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_ACL0,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_ACL1,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_WH_L, KC_BTN3, KC_WH_R, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
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

uint16_t get_tapping_term(uint16_t keycode) {
  switch (keycode) {
    default:
      return TAPPING_TERM_CUSTOM;
  }
}
