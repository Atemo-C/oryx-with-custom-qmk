#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
};

#define DUAL_FUNC_0 LT(10, KC_F9)
#define DUAL_FUNC_1 LT(12, KC_F14)
#define DUAL_FUNC_2 LT(11, KC_F12)
#define DUAL_FUNC_3 LT(2, KC_U)
#define DUAL_FUNC_4 LT(10, KC_R)
#define DUAL_FUNC_5 LT(15, KC_T)
#define DUAL_FUNC_6 LT(15, KC_F21)
#define DUAL_FUNC_7 LT(5, KC_F18)
#define DUAL_FUNC_8 LT(6, KC_F11)
#define DUAL_FUNC_9 LT(3, KC_F16)
#define DUAL_FUNC_10 LT(6, KC_F18)
#define DUAL_FUNC_11 LT(4, KC_E)
#define DUAL_FUNC_12 LT(8, KC_E)
#define DUAL_FUNC_13 LT(2, KC_S)
#define DUAL_FUNC_14 LT(8, KC_F8)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    LALT(KC_ENTER), LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_W),     TD(DANCE_0),                                    TD(DANCE_2),    LGUI(KC_W),     LGUI(KC_5),     LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     DUAL_FUNC_1,    
    TD(DANCE_1),    KC_Q,           KC_C,           KC_L,           KC_M,           KC_J,           US_CCED,                                        DUAL_FUNC_2,    KC_Z,           KC_F,           KC_U,           DUAL_FUNC_3,    DUAL_FUNC_4,    TD(DANCE_3),    
    KC_ESCAPE,      KC_I,           KC_S,           KC_R,           KC_T,           KC_G,           DUAL_FUNC_0,                                                                    DUAL_FUNC_5,    KC_P,           KC_N,           KC_E,           KC_A,           KC_O,           KC_ESCAPE,      
    KC_TAB,         KC_Y,           KC_V,           KC_W,           KC_D,           KC_K,                                           KC_B,           KC_H,           TD(DANCE_4),    TD(DANCE_5),    KC_X,           KC_TAB,         
    KC_RIGHT_ALT,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  TO(3),                                                                                                          TO(5),          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_RIGHT_ALT,   
    KC_SPACE,       KC_ENTER,       TO(1),                          TO(2),          KC_DELETE,      KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_GRAVE), US_AMPR,        US_HASH,        US_DLR,         KC_AT,          RALT(LSFT(KC_M)),                                US_DIV,         US_PERC,        US_DEG,         US_PLUS,        US_ASTR,        RALT(US_TILD),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_LBRC,        US_LCBR,        US_LPRN,        DUAL_FUNC_6,    US_CENT,                                                                        US_MUL,         DUAL_FUNC_7,    US_RPRN,        US_RCBR,        KC_RBRC,        KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_X),     ST_MACRO_0,     US_SECT,        US_UNDS,        US_PIPE,                                        KC_EQUAL,       KC_MINUS,       US_PND,         US_EURO,        ST_MACRO_1,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_8,    KC_9,           KC_8,           KC_7,           US_DEG,         US_PERC,                                        US_PERC,        US_DEG,         KC_7,           KC_8,           KC_9,           DUAL_FUNC_11,   KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_9,    KC_6,           KC_5,           KC_4,           KC_EQUAL,       RALT(LSFT(KC_M)),                                                                RALT(LSFT(KC_M)),KC_EQUAL,       KC_4,           KC_5,           KC_6,           DUAL_FUNC_12,   KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_10,   KC_3,           KC_2,           KC_1,           KC_0,                                           KC_0,           KC_1,           KC_2,           KC_3,           DUAL_FUNC_13,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 DUAL_FUNC_14,   KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        KC_HOME,        KC_UP,          KC_PAGE_UP,     RGB_VAI,        KC_AUDIO_MUTE,                                  KC_AUDIO_MUTE,  KC_BRIGHTNESS_DOWN,KC_PAGE_UP,     KC_UP,          KC_HOME,        KC_BRIGHTNESS_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_AUDIO_VOL_UP,TO(4),                                                                          TO(4),          KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_END,         TD(DANCE_6),    KC_PGDN,        KC_MEDIA_NEXT_TRACK,                                KC_MEDIA_PREV_TRACK,KC_PGDN,        TD(DANCE_7),    KC_END,         KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_UP,    KC_MS_ACCEL1,   KC_MS_ACCEL2,                                   KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_LEFT,  KC_MS_ACCEL0,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSPC,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_SPACE,       TO(3),                                                                          TO(3),          KC_SPACE,       KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ENTER,       KC_MS_WH_RIGHT, KC_MS_BTN3,     KC_MS_WH_DOWN,  KC_ENTER,                                       KC_ENTER,       KC_MS_WH_DOWN,  KC_MS_BTN3,     KC_MS_WH_RIGHT, KC_ENTER,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, TD(DANCE_8),    LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LALT(LGUI(KC_R)),
    KC_TRANSPARENT, KC_H,           KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_NO,          LGUI(KC_5),     LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     LALT(LGUI(KC_S)),
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_N,           KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_F13,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DUAL_FUNC_3:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

    [1] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {0,0,255}, {150,255,255}, {21,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {0,0,255}, {150,255,255}, {21,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

    [2] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {129,255,255}, {150,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {150,255,255}, {0,0,255}, {21,255,255}, {150,255,255}, {150,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {129,255,255}, {150,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {150,255,255}, {0,0,255}, {21,255,255}, {150,255,255}, {150,255,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,0} },

    [3] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {21,255,255}, {129,255,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,255,255}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {21,255,255}, {129,255,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

    [4] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {21,255,255}, {150,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,255,255}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {21,255,255}, {150,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

    [5] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {150,255,255}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {150,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {150,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {150,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {150,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U)))SS_DELAY(100)  SS_TAP(X_2)SS_DELAY(100)  SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_2)SS_DELAY(100)  SS_TAP(X_6)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U)))SS_DELAY(100)  SS_TAP(X_2)SS_DELAY(100)  SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_2)SS_DELAY(100)  SS_TAP(X_2));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_ENTER));
        } else {
          unregister_code16(LGUI(KC_ENTER));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_3)));
        } else {
          unregister_code16(RALT(LSFT(KC_3)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_TILD);
        } else {
          unregister_code16(KC_TILD);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(US_ACUT);
        } else {
          unregister_code16(US_ACUT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(US_ACUT));
        } else {
          unregister_code16(LSFT(US_ACUT));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(US_COLN);
        } else {
          unregister_code16(US_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SCLN);
        } else {
          unregister_code16(KC_SCLN);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(US_CIRC);
        } else {
          unregister_code16(US_CIRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_QUOTE));
        } else {
          unregister_code16(LSFT(KC_QUOTE));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(US_LABK);
        } else {
          unregister_code16(US_LABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_LDAQ);
        } else {
          unregister_code16(US_LDAQ);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(US_RABK);
        } else {
          unregister_code16(US_RABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_RDAQ);
        } else {
          unregister_code16(US_RDAQ);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_MINUS);
        } else {
          unregister_code16(KC_KP_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_KP_SLASH);
        } else {
          unregister_code16(KC_KP_SLASH);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_PLUS);
        } else {
          unregister_code16(KC_KP_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_KP_ASTERISK);
        } else {
          unregister_code16(KC_KP_ASTERISK);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_DOT);
        } else {
          unregister_code16(KC_KP_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_KP_COMMA);
        } else {
          unregister_code16(KC_KP_COMMA);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(US_PLUS);
        } else {
          unregister_code16(US_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(US_ASTR);
        } else {
          unregister_code16(US_ASTR);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_NUM);
        } else {
          unregister_code16(KC_NUM);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[9];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case SINGLE_HOLD: register_code16(US_QUES); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); register_code16(KC_COMMA); break;
        case DOUBLE_HOLD: register_code16(RALT(KC_SLASH)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case SINGLE_HOLD: unregister_code16(US_QUES); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_HOLD: unregister_code16(RALT(KC_SLASH)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(US_EXLM); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_HOLD: register_code16(RALT(KC_1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(US_EXLM); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_HOLD: unregister_code16(RALT(KC_1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[8].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
};
