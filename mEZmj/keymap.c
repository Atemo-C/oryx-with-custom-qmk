#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
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
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
  DANCE_39,
  DANCE_40,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    LALT(KC_ENTER), TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),                                    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   
    TD(DANCE_6),    KC_Q,           KC_C,           KC_L,           KC_M,           KC_J,           US_CCED,                                        TD(DANCE_15),   KC_Z,           KC_F,           KC_U,           TD(DANCE_16),   TD(DANCE_17),   TD(DANCE_18),   
    KC_ESCAPE,      KC_I,           KC_S,           KC_R,           KC_T,           KC_G,           TD(DANCE_7),                                                                    TD(DANCE_19),   KC_P,           KC_N,           KC_E,           KC_A,           KC_O,           KC_ESCAPE,      
    KC_TAB,         KC_Y,           KC_V,           KC_W,           KC_D,           KC_K,                                           KC_B,           KC_H,           TD(DANCE_20),   TD(DANCE_21),   KC_X,           KC_TAB,         
    KC_RIGHT_ALT,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  TO(3),                                                                                                          TO(5),          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_RIGHT_ALT,   
    KC_SPACE,       KC_ENTER,       TO(1),                          TO(2),          KC_DELETE,      KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_GRAVE), US_AMPR,        US_HASH,        US_DLR,         KC_AT,          RALT(LSFT(KC_M)),                                US_DIV,         US_PERC,        US_DEG,         US_PLUS,        US_ASTR,        RALT(US_TILD),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_LBRC,        US_LCBR,        US_LPRN,        TD(DANCE_22),   US_CENT,                                                                        US_MUL,         TD(DANCE_23),   US_RPRN,        US_RCBR,        KC_RBRC,        KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_X),     ST_MACRO_0,     US_SECT,        US_UNDS,        US_PIPE,                                        KC_EQUAL,       KC_MINUS,       US_PND,         US_EURO,        ST_MACRO_1,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_24),   KC_9,           KC_8,           KC_7,           US_DEG,         US_PERC,                                        US_PERC,        US_DEG,         KC_7,           KC_8,           KC_9,           TD(DANCE_27),   KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_25),   KC_6,           KC_5,           KC_4,           KC_EQUAL,       RALT(LSFT(KC_M)),                                                                RALT(LSFT(KC_M)),KC_EQUAL,       KC_4,           KC_5,           KC_6,           TD(DANCE_28),   KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_26),   KC_3,           KC_2,           KC_1,           KC_0,                                           KC_0,           KC_1,           KC_2,           KC_3,           TD(DANCE_29),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_VAD,        KC_HOME,        KC_UP,          KC_PAGE_UP,     RGB_VAI,        KC_AUDIO_MUTE,                                  KC_AUDIO_MUTE,  RGB_VAD,        KC_PAGE_UP,     KC_UP,          KC_HOME,        RGB_VAI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_AUDIO_VOL_UP,TO(4),                                                                          TO(4),          KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_END,         TD(DANCE_30),   KC_PGDN,        KC_MEDIA_NEXT_TRACK,                                KC_MEDIA_PREV_TRACK,KC_PGDN,        TD(DANCE_31),   KC_END,         KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
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
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, TD(DANCE_32),   TD(DANCE_33),   TD(DANCE_34),   TD(DANCE_35),   TD(DANCE_36),   LALT(LGUI(KC_R)),
    KC_TRANSPARENT, KC_H,           KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_NO,          TD(DANCE_37),   TD(DANCE_38),   TD(DANCE_39),   TD(DANCE_40),   LALT(LGUI(KC_S)),
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_N,           KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_F13,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, US_THRN,        ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, US_AE,                                                                          RALT(LSFT(KC_3)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_D),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(7),         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, OSL(7),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(US_THRN),  ST_MACRO_4,     LSFT(KC_L),     LSFT(KC_M),     LSFT(KC_J),     TO(0),                                          TO(0),          LSFT(KC_Z),     LSFT(KC_F),     LSFT(KC_U),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_I),     LSFT(KC_S),     LSFT(KC_R),     LSFT(KC_T),     LSFT(KC_G),     LSFT(US_AE),                                                                    RALT(LSFT(KC_3)),LSFT(KC_P),     LSFT(KC_N),     LSFT(KC_E),     LSFT(KC_A),     LSFT(KC_O),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_Y),     LSFT(KC_V),     ST_MACRO_5,     LSFT(KC_D),     LSFT(KC_K),                                     LSFT(KC_B),     LSFT(KC_H),     KC_TRANSPARENT, KC_TRANSPARENT, RALT(LSFT(KC_D)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { TO(1), TO(2), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(6)),
};

extern rgb_config_t rgb_matrix_config;

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

    [6] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,255,255}, {0,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,255,255}, {0,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

    [7] = { {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,255,255}, {0,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {118,255,255}, {118,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {129,255,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {129,255,255}, {86,255,255}, {215,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,255,255}, {0,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_6)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_2) SS_DELAY(100) SS_TAP(X_8) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_9) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_7) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;

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

static tap dance_state[41];

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
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_1));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_1))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_1)); register_code16(LGUI(KC_1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_1)); register_code16(LGUI(KC_1));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_1))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_2));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_2))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_2)); register_code16(LGUI(KC_2)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_2)); register_code16(LGUI(KC_2));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_2))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_3));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_3)); register_code16(LGUI(KC_3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_3)); register_code16(LGUI(KC_3));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_4));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_4))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_4)); register_code16(LGUI(KC_4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_4)); register_code16(LGUI(KC_4));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_4))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_T)));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_L)); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T)));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_L)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(KC_PSCR); register_code16(KC_PSCR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(KC_PSCR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case SINGLE_HOLD: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(LSFT(RALT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case SINGLE_HOLD: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(LSFT(RALT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_PSCR));
        tap_code16(LCTL(KC_PSCR));
        tap_code16(LCTL(KC_PSCR));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_PSCR));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_PSCR)); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_PSCR))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_PSCR)); register_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_PSCR)); register_code16(LCTL(KC_PSCR));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_PSCR)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_PSCR))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_PSCR)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_PSCR)); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
        tap_code16(LALT(LGUI(KC_T)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_T)));
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_L)); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_T))); register_code16(LALT(LGUI(KC_T)));
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_L)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_T))); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_5));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_5)); register_code16(LGUI(KC_5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_5)); register_code16(LGUI(KC_5));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_6));
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_6))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_6)); register_code16(LGUI(KC_6)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_6)); register_code16(LGUI(KC_6));
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_6))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_6)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_7));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_7))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_7)); register_code16(LGUI(KC_7)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_7)); register_code16(LGUI(KC_7));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_7))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_7)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_8));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_8))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_8)); register_code16(LGUI(KC_8)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_8)); register_code16(LGUI(KC_8));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_8))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_8)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_ENTER));
        tap_code16(LGUI(KC_ENTER));
        tap_code16(LGUI(KC_ENTER));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_ENTER));
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_ENTER)); break;
        case SINGLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_ENTER)); register_code16(LGUI(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_ENTER)); register_code16(LGUI(KC_ENTER));
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_ENTER)); break;
        case SINGLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_ENTER)); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(RALT(KC_3)));
        tap_code16(LSFT(RALT(KC_3)));
        tap_code16(LSFT(RALT(KC_3)));
    }
    if(state->count > 3) {
        tap_code16(LSFT(RALT(KC_3)));
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(LSFT(RALT(KC_3))); break;
        case SINGLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(LSFT(RALT(KC_3))); register_code16(LSFT(RALT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(RALT(KC_3))); register_code16(LSFT(RALT(KC_3)));
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(LSFT(RALT(KC_3))); break;
        case SINGLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(LSFT(RALT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(RALT(KC_3))); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(US_ACUT);
        tap_code16(US_ACUT);
        tap_code16(US_ACUT);
    }
    if(state->count > 3) {
        tap_code16(US_ACUT);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(US_ACUT); break;
        case SINGLE_HOLD: register_code16(LSFT(US_ACUT)); break;
        case DOUBLE_TAP: register_code16(US_ACUT); register_code16(US_ACUT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(US_ACUT); register_code16(US_ACUT);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(US_ACUT); break;
        case SINGLE_HOLD: unregister_code16(LSFT(US_ACUT)); break;
        case DOUBLE_TAP: unregister_code16(US_ACUT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(US_ACUT); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(US_COLN);
        tap_code16(US_COLN);
        tap_code16(US_COLN);
    }
    if(state->count > 3) {
        tap_code16(US_COLN);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(US_COLN); break;
        case SINGLE_HOLD: register_code16(KC_SCLN); break;
        case DOUBLE_TAP: register_code16(US_COLN); register_code16(US_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(US_COLN); register_code16(US_COLN);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(US_COLN); break;
        case SINGLE_HOLD: unregister_code16(KC_SCLN); break;
        case DOUBLE_TAP: unregister_code16(US_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(US_COLN); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_V))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(US_CIRC);
        tap_code16(US_CIRC);
        tap_code16(US_CIRC);
    }
    if(state->count > 3) {
        tap_code16(US_CIRC);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(US_CIRC); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_QUOTE)); break;
        case DOUBLE_TAP: register_code16(US_CIRC); register_code16(US_CIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(US_CIRC); register_code16(US_CIRC);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(US_CIRC); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_QUOTE)); break;
        case DOUBLE_TAP: unregister_code16(US_CIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(US_CIRC); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case SINGLE_HOLD: register_code16(US_QUES); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); register_code16(KC_COMMA); break;
        case DOUBLE_HOLD: register_code16(RALT(KC_SLASH)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case SINGLE_HOLD: unregister_code16(US_QUES); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_HOLD: unregister_code16(RALT(KC_SLASH)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(US_EXLM); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_HOLD: register_code16(RALT(KC_1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(US_EXLM); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_HOLD: unregister_code16(RALT(KC_1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(US_LABK);
        tap_code16(US_LABK);
        tap_code16(US_LABK);
    }
    if(state->count > 3) {
        tap_code16(US_LABK);
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(US_LABK); break;
        case SINGLE_HOLD: register_code16(US_LDAQ); break;
        case DOUBLE_TAP: register_code16(US_LABK); register_code16(US_LABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(US_LABK); register_code16(US_LABK);
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(US_LABK); break;
        case SINGLE_HOLD: unregister_code16(US_LDAQ); break;
        case DOUBLE_TAP: unregister_code16(US_LABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(US_LABK); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(US_RABK);
        tap_code16(US_RABK);
        tap_code16(US_RABK);
    }
    if(state->count > 3) {
        tap_code16(US_RABK);
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(US_RABK); break;
        case SINGLE_HOLD: register_code16(US_RDAQ); break;
        case DOUBLE_TAP: register_code16(US_RABK); register_code16(US_RABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(US_RABK); register_code16(US_RABK);
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(US_RABK); break;
        case SINGLE_HOLD: unregister_code16(US_RDAQ); break;
        case DOUBLE_TAP: unregister_code16(US_RABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(US_RABK); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_MINUS);
        tap_code16(KC_KP_MINUS);
        tap_code16(KC_KP_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_MINUS);
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_KP_MINUS); break;
        case SINGLE_HOLD: register_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: register_code16(KC_KP_MINUS); register_code16(KC_KP_MINUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_MINUS); register_code16(KC_KP_MINUS);
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_MINUS); break;
        case SINGLE_HOLD: unregister_code16(KC_KP_SLASH); break;
        case DOUBLE_TAP: unregister_code16(KC_KP_MINUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_MINUS); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_PLUS);
        tap_code16(KC_KP_PLUS);
        tap_code16(KC_KP_PLUS);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_PLUS);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_KP_PLUS); break;
        case SINGLE_HOLD: register_code16(KC_KP_ASTERISK); break;
        case DOUBLE_TAP: register_code16(KC_KP_PLUS); register_code16(KC_KP_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_PLUS); register_code16(KC_KP_PLUS);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_PLUS); break;
        case SINGLE_HOLD: unregister_code16(KC_KP_ASTERISK); break;
        case DOUBLE_TAP: unregister_code16(KC_KP_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_PLUS); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_DOT);
        tap_code16(KC_KP_DOT);
        tap_code16(KC_KP_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_DOT);
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(KC_KP_DOT); break;
        case SINGLE_HOLD: register_code16(KC_KP_COMMA); break;
        case DOUBLE_TAP: register_code16(KC_KP_DOT); register_code16(KC_KP_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_DOT); register_code16(KC_KP_DOT);
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_KP_COMMA); break;
        case DOUBLE_TAP: unregister_code16(KC_KP_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_DOT); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case SINGLE_HOLD: register_code16(KC_SLASH); break;
        case DOUBLE_TAP: register_code16(KC_MINUS); register_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case SINGLE_HOLD: unregister_code16(KC_SLASH); break;
        case DOUBLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(tap_dance_state_t *state, void *user_data);
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void on_dance_28(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(US_PLUS);
        tap_code16(US_PLUS);
        tap_code16(US_PLUS);
    }
    if(state->count > 3) {
        tap_code16(US_PLUS);
    }
}

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(US_PLUS); break;
        case SINGLE_HOLD: register_code16(US_ASTR); break;
        case DOUBLE_TAP: register_code16(US_PLUS); register_code16(US_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(US_PLUS); register_code16(US_PLUS);
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(US_PLUS); break;
        case SINGLE_HOLD: unregister_code16(US_ASTR); break;
        case DOUBLE_TAP: unregister_code16(US_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(US_PLUS); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(KC_COMMA); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_COMMA); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(KC_PSCR); register_code16(KC_PSCR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(KC_PSCR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_1));
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_1))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_1)); register_code16(LGUI(KC_1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_1)); register_code16(LGUI(KC_1));
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_1))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_2));
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_2))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_2)); register_code16(LGUI(KC_2)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_2)); register_code16(LGUI(KC_2));
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_2))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_3));
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_3)); register_code16(LGUI(KC_3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_3)); register_code16(LGUI(KC_3));
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_4));
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_4))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_4)); register_code16(LGUI(KC_4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_4)); register_code16(LGUI(KC_4));
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_4))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_5));
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_5)); register_code16(LGUI(KC_5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_5)); register_code16(LGUI(KC_5));
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_5))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(tap_dance_state_t *state, void *user_data);
void dance_38_finished(tap_dance_state_t *state, void *user_data);
void dance_38_reset(tap_dance_state_t *state, void *user_data);

void on_dance_38(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_6));
    }
}

void dance_38_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_6))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_6)); register_code16(LGUI(KC_6)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_6)); register_code16(LGUI(KC_6));
    }
}

void dance_38_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_6))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_6)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(tap_dance_state_t *state, void *user_data);
void dance_39_finished(tap_dance_state_t *state, void *user_data);
void dance_39_reset(tap_dance_state_t *state, void *user_data);

void on_dance_39(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_7));
    }
}

void dance_39_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_7))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_7)); register_code16(LGUI(KC_7)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_7)); register_code16(LGUI(KC_7));
    }
}

void dance_39_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_7))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_7)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(tap_dance_state_t *state, void *user_data);
void dance_40_finished(tap_dance_state_t *state, void *user_data);
void dance_40_reset(tap_dance_state_t *state, void *user_data);

void on_dance_40(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_8));
    }
}

void dance_40_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_8))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_8)); register_code16(LGUI(KC_8)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_8)); register_code16(LGUI(KC_8));
    }
}

void dance_40_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_8))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_8)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
    }
    dance_state[40].step = 0;
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
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
        [DANCE_39] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_39, dance_39_finished, dance_39_reset),
        [DANCE_40] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_40, dance_40_finished, dance_40_reset),
};
