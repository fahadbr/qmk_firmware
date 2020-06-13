/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

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
#define KC_TMOUSE TG(_MOUSE)
#define KC_LTH1 LT(_NUMPAD, KC_MINS)
#define KC_LTH2 CTL_T(KC_MINS)
#define KC_L_ENT LT(_LOWER, KC_ENT)
#define KC_A_M1 M1(KC_A)
#define KC_S_M2 M2(KC_S)
#define KC_D_M3 M3(KC_D)
#define KC_F_M4 M4(KC_F)
#define KC_0_M1 M1(KC_0)
#define KC_4_M2 M2(KC_4)
#define KC_5_M3 M3(KC_5)
#define KC_6_M4 M4(KC_6)
#define KC_LCBR_M1 M1(KC_LCBR)
#define KC_RCBR_M2 M2(KC_RCBR)
#define KC_LBRC_M3 M3(KC_LBRC)
#define KC_RBRC_M4 M4(KC_RBRC)
#define KC_ESC_X GUI_T(KC_ESC)
#define KC_CAPS_X LT(_RAISE, KC_CAPS)

// right side
#define KC_NGUI LM(_NUMPAD, MOD_LGUI)
#define KC_G_EQL GUI_T(KC_EQL)
#define KC_G_LEFT GUI_T(KC_LEFT)
#define KC_C_DWN CTL_T(KC_DOWN)
#define KC_A_UP ALT_T(KC_UP)
#define KC_M_RGHT LT(_MOUSE, KC_RGHT)
#define KC_J_M4 M4(KC_J)
#define KC_K_M3 M3(KC_K)
#define KC_L_M2 M2(KC_L)
#define KC_SCLN_M1 M1(KC_SCLN)
#define KC_DOWN_M4 M4(KC_DOWN)
#define KC_UP_M3 M3(KC_UP)
#define KC_RGHT_M2 M2(KC_RGHT)
#define KC_PLUS_M1 M1(KC_PLUS)
#define KC_QUOT_X SFT_T(KC_QUOT)
#define KC_F4_M4 M4(KC_F4)
#define KC_F5_M3 M3(KC_F5)
#define KC_F6_M2 M2(KC_F6)

#define KC_SPC_X LT(_NUMPAD, KC_SPC)

#define KC________ _______

// enum planck_layers {
//   _QWERTY,
//   _LOWER,
//   _RAISE,
//   _NUMPAD,
//   _MOUSE
// };


enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  PLOVER,
  BACKLIT,
  EXT_PLV
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_kc(
    TAB,     Q,       W,       E,       R,       T,       Y,       U,       I,       O,       P,       BSPC,
    ESC_X,   A_M1,    S_M2,    D_M3,    F_M4,    G,       H,       J_M4,    K_M3,    L_M2,    SCLN_M1, QUOT_X,
    LSFT,    Z,       X,       C,       V,       B,       N,       M,       COMM,    DOT,     SLSH,    SFTENT,
    CAPS_X,  TMOUSE,  NGUI,    LTH2,    LTH1,    L_ENT,   L_ENT,   SPC_X,   G_EQL,   C_DWN,   A_UP,    M_RGHT
),

[_LOWER] = LAYOUT_kc(
    INS,     EXLM,    AT,      HASH,    DLR,     PERC,    CIRC,    AMPR,    ASTR,    LPRN,    RPRN,    DEL,
    BSPC,    _______, _______, LBRC_M3, RBRC_M4, GRV,     LEFT,    DOWN_M4, UP_M3,   RGHT_M2, PIPE,    F12,
    PSCR,    LBRC,    RBRC,    LCBR,    RCBR,    TILD,    HOME,    PGDN,    PGUP,    END,     BSLS,    _______,
    _______, _______, _______, _______, _______, _______, _______, PLUS,    TILD,    _______, _______, _______
),

[_RAISE] = LAYOUT_planck_grid(
     _______, RESET,   _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,
     _______, KC_BRID, KC_BRIU, KC_VOLD, KC_VOLU, _______, _______,  _______, _______, _______, _______, _______,
     _______, _______, _______, _______, KC_MUTE, _______, _______,  _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
),

[_NUMPAD] = LAYOUT_kc(
    _______, _______, 7,       8,       9,       _______, _______, F1,      F2,      F3,      _______, _______,
    _______, 0_M1,    4_M2,    5_M3,    6_M4,    _______, _______, F4_M4,   F5_M3,   F6_M2,   _______, _______,
    _______, _______, 1,       2,       3,       _______, _______, F5,      F8,      F9,      _______, _______,
    _______, _______, _______, _______, 0,       _______, _______, F10,     F11,     F12,     _______, _______
),

[_MOUSE] = LAYOUT_planck_grid(
    _______, _______,  _______, _______, KC_ACL2, _______, _______, _______, _______, _______, _______, _______,
 TG(_MOUSE), _______,  _______, _______, KC_ACL1, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,TG(_MOUSE),
    _______, _______,  _______, _______, KC_ACL0, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, _______,
    _______, _______,  _______, _______, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN2, _______, _______, _______, _______
)


};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
        #ifdef KEYBOARD_planck_rev5
          writePinLow(E6);
        #endif
      } else {
        unregister_code(KC_RSFT);
        #ifdef KEYBOARD_planck_rev5
          writePinHigh(E6);
        #endif
      }
      return false;
      break;
  }
  return true;
}

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_PGUP);
      #endif
    }
  }
}

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0: {
#ifdef AUDIO_ENABLE
            static bool play_sound = false;
#endif
            if (active) {
#ifdef AUDIO_ENABLE
                if (play_sound) { PLAY_SONG(plover_song); }
#endif
                layer_on(_RAISE);
            } else {
#ifdef AUDIO_ENABLE
                if (play_sound) { PLAY_SONG(plover_gb_song); }
#endif
                layer_off(_RAISE);
            }
#ifdef AUDIO_ENABLE
            play_sound = true;
#endif
            break;
        }
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
//  switch (keycode) {
//    case RAISE:
//    case LOWER:
//      return false;
//    default:
//      return true;
//  }
  return true;
}
