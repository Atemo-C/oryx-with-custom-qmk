#include "features/achordion.h"
#include "i18n.h"
#include "version.h"
#include QMK_KEYBOARD_H

#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
	RGB_SLD = ML_SAFE_RANGE,
	ST_MACRO_0,
	ST_MACRO_1,
};

void matrix_scan_user(void) {
	achordion_task();
}

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
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_moonlander(
		LALT(KC_ENTER),   LALT(LSFT(KC_E)),   KC_AUDIO_VOL_DOWN,   KC_AUDIO_MUTE,      KC_AUDIO_VOL_UP,     KC_PSCR,            LSFT(KC_PSCR),
		LALT(LGUI(KC_S)), LALT(LGUI(KC_R)),   KC_MEDIA_PREV_TRACK, TD(DANCE_2),        KC_MEDIA_NEXT_TRACK, LALT(LSFT(KC_E)),   TD(DANCE_3),

		TD(DANCE_0),      FR_Q,               KC_C,                KC_L,               FR_M,                KC_J,               FR_CCED,
		ST_MACRO_0,       FR_Z,               KC_F,                KC_U,               TD(DANCE_4),         TD(DANCE_5),        TD(DANCE_6),

		KC_ESCAPE,        MT(MOD_LGUI, KC_I), MT(MOD_LALT, KC_S),  MT(MOD_LCTL, KC_R), MT(MOD_LSFT, KC_T),  MT(MOD_RALT, KC_G), TD(DANCE_1),
		TD(DANCE_7),      MT(MOD_RALT, KC_P), MT(MOD_RSFT, KC_N),  MT(MOD_RCTL, KC_E), MT(MOD_RALT, FR_A),  MT(MOD_RGUI, KC_O), KC_ESCAPE,

		KC_TAB,           KC_Y,               KC_V,                FR_W,               KC_D,                KC_K,
		KC_B,             KC_H,               TD(DANCE_8),         TD(DANCE_9),        KC_X,                KC_TAB,

		KC_LEFT,          KC_DOWN,            KC_UP,               KC_RIGHT,           KC_LEFT_SHIFT,       TO(3),
		TO(5),            KC_RIGHT_SHIFT,     KC_LEFT,             KC_DOWN,            KC_UP,               KC_RIGHT,

		KC_SPACE,         KC_ENTER,           TO(1),
		TO(2),            KC_DELETE,          KC_BSPC
	),
	[1] = LAYOUT_moonlander(
		KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
		KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

		KC_TRANSPARENT,      FR_GRV,         FR_AMP,         FR_HASH,        FR_DLR,         FR_AT,          RALT(LSFT(FR_CCED)),
		RALT(LSFT(FR_COLN)), FR_PERC,        FR_OVRR,        FR_PLUS,        FR_ASTR,        FR_TILD,        KC_TRANSPARENT,

		KC_TRANSPARENT,      FR_SLSH,        FR_LBRC,        FR_LCBR,        FR_LPRN,        FR_LESS,        RALT(LSFT(KC_E)),
		RALT(FR_DOT),        FR_GRTR,        FR_RPRN,        FR_RCBR,        FR_RBRC,        FR_BSLS,        KC_TRANSPARENT,

		KC_TRANSPARENT,      TD(DANCE_10),   ST_MACRO_1,     FR_SECT,        FR_UNDS,        FR_PIPE,
		FR_EQL,              FR_MINS,        FR_PND,         FR_EURO,        FR_SUP2,        KC_TRANSPARENT,

		KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
		KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

		KC_TRANSPARENT,      KC_TRANSPARENT, TO(0),
		KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT
	),
	[2] = LAYOUT_moonlander(
		FR_PND,              FR_EURO,        FR_DLR,         RALT(LSFT(KC_E)), FR_OVRR,    FR_HASH,        FR_CCED,
		RALT(LSFT(FR_CCED)), FR_HASH,        FR_OVRR,        RALT(LSFT(KC_E)), FR_DLR,     FR_EURO,        FR_PND,

		KC_ESCAPE,           LALT(KC_C),     KC_KP_9,        KC_KP_8,          KC_KP_7,    KC_R,           FR_TILD,
		FR_TILD,             KC_R,           KC_KP_7,        KC_KP_8,          KC_KP_9,    LALT(KC_C),     KC_ESCAPE,

		TD(DANCE_11),        TD(DANCE_12),   KC_KP_6,        KC_KP_5,          KC_KP_4,    FR_LPRN,        FR_RPRN,
		FR_LPRN,             FR_RPRN,        KC_KP_4,        KC_KP_5,          KC_KP_6,    TD(DANCE_13),   TD(DANCE_14),

		KC_KP_MINUS,         KC_KP_PLUS,     KC_KP_3,        KC_KP_2,          KC_KP_1,    FR_PERC,
		FR_PERC,             KC_KP_1,        KC_KP_2,        KC_KP_3,          KC_KP_PLUS, KC_KP_MINUS,

		KC_KP_EQUAL,         KC_BSPC,        KC_KP_COMMA,    KC_KP_DOT,        KC_KP_0,    KC_TRANSPARENT,
		KC_TRANSPARENT,      KC_KP_0,        KC_KP_DOT,      KC_KP_COMMA,      KC_BSPC,    KC_KP_EQUAL,

		KC_TRANSPARENT,      KC_TRANSPARENT, KC_TRANSPARENT,
		TO(0),               KC_TRANSPARENT, KC_TRANSPARENT
	),
	[3] = LAYOUT_moonlander(
		KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,
		KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,

		KC_TRANSPARENT,      RGB_VAD, KC_HOME,    KC_UP,               KC_PAGE_UP,          RGB_VAI,             KC_INSERT,
		KC_INSERT,           RGB_VAD, KC_PAGE_UP, KC_UP,               KC_HOME,             RGB_VAI,             KC_TRANSPARENT,

		KC_TRANSPARENT,      KC_AUDIO_VOL_DOWN,   KC_LEFT,             KC_DOWN,             KC_RIGHT,            KC_AUDIO_VOL_UP,     TO(4),
		TO(4),               KC_AUDIO_VOL_DOWN,   KC_LEFT,             KC_DOWN,             KC_RIGHT,            KC_AUDIO_VOL_UP,     KC_TRANSPARENT,

		KC_TRANSPARENT,      KC_MEDIA_PREV_TRACK, KC_END,              KC_MEDIA_PLAY_PAUSE, KC_PGDN,             KC_MEDIA_NEXT_TRACK,
		KC_MEDIA_PREV_TRACK, KC_PGDN,             KC_MEDIA_PLAY_PAUSE, KC_END,              KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT,

		KC_RIGHT_ALT,        KC_LEFT_GUI,         KC_LEFT_ALT,         KC_LEFT_CTRL,        KC_TRANSPARENT,      TO(0),
		KC_TRANSPARENT,      KC_TRANSPARENT,      KC_RIGHT_CTRL,       KC_LEFT_ALT,         KC_RIGHT_GUI,        KC_RIGHT_ALT,

		KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,
		KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT
	),
	[4] = LAYOUT_moonlander(
		KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
		KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,

		KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_UP,    KC_MS_ACCEL1,   KC_MS_ACCEL2,
		KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_LEFT,  KC_MS_ACCEL0,   KC_TRANSPARENT,

		KC_TRANSPARENT, KC_BSPC,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_SPACE,       TO(3),
		TO(3),          KC_SPACE,       KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_BSPC,        KC_TRANSPARENT,

		KC_TRANSPARENT, KC_DELETE,      KC_MS_WH_RIGHT, KC_MS_BTN3,     KC_MS_WH_DOWN,  KC_ENTER,
		KC_ENTER,       KC_MS_WH_DOWN,  KC_MS_BTN3,     KC_MS_WH_RIGHT, KC_DELETE,      KC_TRANSPARENT,

		KC_RIGHT_ALT,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT, TO(0),
		KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_TRANSPARENT,

		KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,
		KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
	),
	[5] = LAYOUT_moonlander(
		KC_TRANSPARENT, KC_1,           KC_2,           KC_3,         KC_4,          KC_5,           KC_6,
		KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_I),     LGUI(KC_S),   LGUI(KC_R),    LGUI(KC_T),     KC_TRANSPARENT,

		KC_TRANSPARENT, KC_H,           FR_A,           FR_Z,         KC_E,          KC_R,           KC_T,
		KC_Y,           KC_NO,          LGUI(KC_N),     LGUI(KC_E),   LGUI(KC_A),    LGUI(KC_O),     KC_TRANSPARENT,

		KC_TRANSPARENT, KC_LEFT_SHIFT,  FR_Q,           KC_S,         KC_D,          KC_F,           KC_G,
		KC_N,           KC_NO,          KC_F1,          KC_F2,        KC_F3,         KC_F4,          KC_TRANSPARENT,

		KC_TRANSPARENT, KC_LEFT_CTRL,   FR_W,           KC_X,         KC_C,          KC_V,
		KC_NO,          KC_F5,          KC_F6,          KC_F7,        KC_F8,         KC_TRANSPARENT,

		KC_RIGHT_ALT,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_TRANSPARENT,
		TO(0),          KC_F9,          KC_F10,         KC_F11,       KC_F12,        KC_F13,

		KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
		KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
	),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
	rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
	[0] = {
		{21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {0,0,255},     {21,255,255},  {129,255,255},
		{150,255,255}, {129,255,255}, {0,0,255},     {215,255,255}, {129,255,255}, {150,255,255}, {129,255,255},

		{0,0,255},     {215,255,255}, {129,255,255}, {150,255,255}, {129,255,255}, {0,0,255},     {215,255,255},
		{129,255,255}, {150,255,255}, {129,255,255}, {86,255,255},  {21,255,255},  {129,255,255}, {150,255,255},

		{129,255,255}, {21,255,255},  {107,255,255}, {107,255,255}, {0,0,255},     {0,0,255},     {43,255,255},
		{129,255,255}, {21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {0,0,255},     {21,255,255},

		{155,255,255}, {150,255,255}, {129,255,255}, {0,0,255},     {215,255,255}, {155,255,255},
		{150,255,255}, {155,255,255}, {0,0,255},     {215,255,255}, {129,255,255}, {150,255,255},

		{155,255,255}, {0,0,255},     {215,255,255}, {129,255,255}, {150,255,255}, {129,255,255},
		{86,255,255},  {21,255,255},  {129,255,255}, {150,255,255}, {129,255,255}, {21,255,255},

		{107,255,255}, {107,255,255}, {0,0,255},
		{0,0,255},     {43,255,255},  {129,255,255}
	},
	[1] = {
		{21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {0,0,255},     {215,255,255}, {155,255,255},
		{129,255,255}, {155,255,255}, {0,0,255},     {215,255,255}, {155,255,255}, {129,255,255}, {155,255,255},

		{0,0,255},     {215,255,255}, {155,255,255}, {129,255,255}, {155,255,255}, {0,0,255},     {215,255,255},
		{155,255,255}, {129,255,255}, {129,255,255}, {86,255,255},  {21,255,255},  {155,255,255}, {129,255,255},

		{155,255,255}, {21,255,255},  {155,255,255}, {155,255,255}, {0,0,255},     {0,0,255},     {0,255,255},
		{129,255,255}, {21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {0,0,255},     {215,255,255},

		{155,255,255}, {129,255,255}, {155,255,255}, {0,0,255},     {215,255,255}, {155,255,255},
		{129,255,255}, {155,255,255}, {0,0,255},     {215,255,255}, {155,255,255}, {129,255,255},

		{155,255,255}, {0,0,255},     {215,255,255}, {155,255,255}, {129,255,255}, {155,255,255},
		{86,255,255},  {21,255,255},  {155,255,255}, {129,255,255}, {155,255,255}, {21,255,255},

		{155,255,255}, {155,255,255}, {0,0,255},
		{0,0,255},     {43,255,255},  {129,255,255}
	},
	[2] = {
		{215,255,255}, {21,255,255},  {86,255,255},  {86,255,255},  {86,255,255},  {215,255,255}, {21,255,255},
		{86,255,255},  {86,255,255},  {86,255,255},  {215,255,255}, {129,255,255}, {129,255,255}, {129,255,255},

		{107,255,255}, {215,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {107,255,255}, {155,255,255},
		{129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {155,255,255}, {155,255,255}, {155,255,255},

		{155,255,255}, {155,255,255}, {155,255,255}, {155,255,255}, {0,0,255},     {0,0,255},     {43,255,255},
		{129,255,255}, {215,255,255}, {21,255,255},  {86,255,255},  {86,255,255},  {86,255,255},  {215,255,255},

		{21,255,255},  {86,255,255},  {86,255,255},  {86,255,255},  {215,255,255}, {129,255,255},
		{129,255,255}, {129,255,255}, {107,255,255}, {215,255,255}, {129,255,255}, {129,255,255},

		{129,255,255}, {107,255,255}, {155,255,255}, {129,255,255}, {129,255,255}, {129,255,255},
		{129,255,255}, {155,255,255}, {155,255,255}, {155,255,255}, {155,255,255}, {155,255,255},

		{155,255,255}, {155,255,255}, {0,0,255},
		{0,0,255},     {0,255,255},   {129,255,255}
	},
	[3] = {
		{21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {86,255,255},  {215,255,255}, {107,255,255},
		{107,255,255}, {107,255,255}, {86,255,255},  {215,255,255}, {155,255,255}, {129,255,255}, {155,255,255},

		{86,255,255},  {215,255,255}, {129,255,255}, {129,255,255}, {107,255,255}, {86,255,255},  {215,255,255},
		{155,255,255}, {129,255,255}, {155,255,255}, {86,255,255},  {21,255,255},  {107,255,255}, {107,255,255},

		{107,255,255}, {21,255,255},  {155,255,255}, {43,255,255},  {0,0,255},     {0,0,255},     {43,255,255},
		{0,255,255},   {21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {86,255,255},  {215,255,255},

		{107,255,255}, {107,255,255}, {107,255,255}, {86,255,255},  {215,255,255}, {155,255,255},
		{129,255,255}, {155,255,255}, {86,255,255},  {215,255,255}, {129,255,255}, {129,255,255},

		{107,255,255}, {86,255,255},  {215,255,255}, {155,255,255}, {129,255,255}, {155,255,255},
		{86,255,255},  {21,255,255},  {107,255,255}, {107,255,255}, {107,255,255}, {21,255,255},

		{155,255,255}, {43,255,255},  {0,0,255},
		{0,0,255},     {43,255,255},  {129,255,255}
	},
	[4] = {
		{21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {86,255,255},  {215,255,255}, {107,255,255},
		{0,0,255},     {0,0,255},     {86,255,255},  {215,255,255}, {107,255,255}, {129,255,255}, {155,255,255},

		{86,255,255},  {215,255,255}, {129,255,255}, {129,255,255}, {155,255,255}, {86,255,255},  {215,255,255},
		{155,255,255}, {129,255,255}, {155,255,255}, {86,255,255},  {21,255,255},  {107,255,255}, {0,0,255},

		{0,0,255},     {21,255,255},  {107,255,255}, {0,255,255},   {155,255,255}, {155,255,255}, {43,255,255},
		{0,255,255},   {21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {86,255,255},  {215,255,255},

		{107,255,255}, {0,0,255},     {0,0,255},     {86,255,255},  {215,255,255}, {155,255,255},
		{129,255,255}, {155,255,255}, {86,255,255},  {215,255,255}, {129,255,255}, {129,255,255},

		{155,255,255}, {86,255,255},  {215,255,255}, {155,255,255}, {129,255,255}, {155,255,255},
		{86,255,255},  {21,255,255},  {107,255,255}, {0,0,255},     {0,0,255},     {21,255,255},

		{107,255,255}, {0,255,255},   {155,255,255},
		{155,255,255}, {43,255,255},  {129,255,255}
	},
	[5] = {
		{21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {86,255,255},  {107,255,255}, {155,255,255},
		{86,255,255},  {86,255,255},  {86,255,255},  {107,255,255}, {155,255,255}, {129,255,255}, {155,255,255},

		{86,255,255},  {107,255,255}, {129,255,255}, {129,255,255}, {155,255,255}, {86,255,255},  {107,255,255},
		{155,255,255}, {129,255,255}, {155,255,255}, {86,255,255},  {107,255,255}, {155,255,255}, {155,255,255},

		{155,255,255}, {107,255,255}, {155,255,255}, {155,255,255}, {0,0,255},     {0,0,255},     {43,255,255},
		{129,255,255}, {21,255,255},  {21,255,255},  {0,0,255},     {0,0,255},     {107,255,255}, {215,255,255},

		{215,255,255}, {107,255,255}, {107,255,255}, {107,255,255}, {215,255,255}, {215,255,255},
		{107,255,255}, {107,255,255}, {107,255,255}, {215,255,255}, {215,255,255}, {107,255,255},

		{107,255,255}, {107,255,255}, {215,255,255}, {215,255,255}, {107,255,255}, {107,255,255},
		{107,255,255}, {21,255,255},  {0,0,0},       {0,0,0},       {0,0,0},       {21,255,255},

		{155,255,255}, {155,255,255}, {0,0,255},     {0,0,255},     {43,255,255},  {0,255,255}
	},
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
	 default:
		if (rgb_matrix_get_flags() == LED_FLAG_NONE)
			rgb_matrix_set_color_all(0, 0, 0);
		break;
	}
	return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (!process_achordion(keycode, record)) { return false; }
	switch (keycode) {
		case ST_MACRO_0:
		if (record->event.pressed) {
			SEND_STRING(
				SS_TAP(X_CAPS) SS_DELAY(2)
				SS_TAP(X_9)    SS_DELAY(2)
				SS_TAP(X_CAPS)
			);
		}
		break;
		case ST_MACRO_1:
		if (record->event.pressed) {
			SEND_STRING(
				SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(2)
				SS_TAP(X_KP_2)                SS_DELAY(2)
				SS_TAP(X_KP_0)                SS_DELAY(2)
				SS_TAP(X_KP_2)                SS_DELAY(2)
				SS_TAP(X_KP_6)                SS_DELAY(2)
				SS_TAP(X_SPACE)
			);
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

static tap dance_state[15];

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
		tap_code16(LCTL(KC_C));
		tap_code16(LCTL(KC_C));
		tap_code16(LCTL(KC_C));
	}
	if(state->count > 3) {
		tap_code16(LCTL(KC_C));
	}
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[0].step = dance_step(state);
	switch (dance_state[0].step) {
		case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
		case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
		case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_V))); break;
		case DOUBLE_HOLD: register_code16(LCTL(LGUI(KC_V))); break;
		case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
	}
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[0].step) {
		case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
		case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
		case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_V))); break;
		case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(KC_V))); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
	}
	dance_state[0].step = 0;
}

void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(RALT(FR_COMM));
		tap_code16(RALT(FR_COMM));
		tap_code16(RALT(FR_COMM));
	}
	if(state->count > 3) {
		tap_code16(RALT(FR_COMM));
	}
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[1].step = dance_step(state);
	switch (dance_state[1].step) {
		case SINGLE_TAP: register_code16(RALT(FR_COMM)); break;
		case SINGLE_HOLD: register_code16(RALT(FR_ASTR)); break;
		case DOUBLE_TAP: register_code16(RALT(FR_COMM)); register_code16(RALT(FR_COMM)); break;
		case DOUBLE_SINGLE_TAP: tap_code16(RALT(FR_COMM)); register_code16(RALT(FR_COMM));
	}
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[1].step) {
		case SINGLE_TAP: unregister_code16(RALT(FR_COMM)); break;
		case SINGLE_HOLD: unregister_code16(RALT(FR_ASTR)); break;
		case DOUBLE_TAP: unregister_code16(RALT(FR_COMM)); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(RALT(FR_COMM)); break;
	}
	dance_state[1].step = 0;
}

void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_MEDIA_PLAY_PAUSE);
		tap_code16(KC_MEDIA_PLAY_PAUSE);
		tap_code16(KC_MEDIA_PLAY_PAUSE);
	}
	if(state->count > 3) {
		tap_code16(KC_MEDIA_PLAY_PAUSE);
	}
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[2].step = dance_step(state);
	switch (dance_state[2].step) {
		case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
		case SINGLE_HOLD: register_code16(KC_MEDIA_STOP); break;
		case DOUBLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
	}
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[2].step) {
		case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
		case SINGLE_HOLD: unregister_code16(KC_MEDIA_STOP); break;
		case DOUBLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
	}
	dance_state[2].step = 0;
}

void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(LGUI(KC_ENTER));
		tap_code16(LGUI(KC_ENTER));
		tap_code16(LGUI(KC_ENTER));
	}
	if(state->count > 3) {
		tap_code16(LGUI(KC_ENTER));
	}
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[3].step = dance_step(state);
	switch (dance_state[3].step) {
		case SINGLE_TAP: register_code16(LGUI(KC_ENTER)); break;
		case SINGLE_HOLD: register_code16(KC_F4); break;
		case DOUBLE_TAP: register_code16(LGUI(KC_ENTER)); register_code16(LGUI(KC_ENTER)); break;
		case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_ENTER)); register_code16(LGUI(KC_ENTER));
	}
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[3].step) {
		case SINGLE_TAP: unregister_code16(LGUI(KC_ENTER)); break;
		case SINGLE_HOLD: unregister_code16(KC_F4); break;
		case DOUBLE_TAP: unregister_code16(LGUI(KC_ENTER)); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_ENTER)); break;
	}
	dance_state[3].step = 0;
}

void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(FR_APOS);
		tap_code16(FR_APOS);
		tap_code16(FR_APOS);
	}
	if(state->count > 3) {
		tap_code16(FR_APOS);
	}
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[4].step = dance_step(state);
	switch (dance_state[4].step) {
		case SINGLE_TAP: register_code16(FR_APOS); break;
		case SINGLE_HOLD: register_code16(FR_DQUO); break;
		case DOUBLE_TAP: register_code16(FR_APOS); register_code16(FR_APOS); break;
		case DOUBLE_SINGLE_TAP: tap_code16(FR_APOS); register_code16(FR_APOS);
	}
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[4].step) {
		case SINGLE_TAP: unregister_code16(FR_APOS); break;
		case SINGLE_HOLD: unregister_code16(FR_DQUO); break;
		case DOUBLE_TAP: unregister_code16(FR_APOS); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(FR_APOS); break;
	}
	dance_state[4].step = 0;
}

void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(FR_COLN);
		tap_code16(FR_COLN);
		tap_code16(FR_COLN);
	}
	if(state->count > 3) {
		tap_code16(FR_COLN);
	}
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[5].step = dance_step(state);
	switch (dance_state[5].step) {
		case SINGLE_TAP: register_code16(FR_COLN); break;
		case SINGLE_HOLD: register_code16(FR_SCLN); break;
		case DOUBLE_TAP: register_code16(FR_COLN); register_code16(FR_COLN); break;
		case DOUBLE_SINGLE_TAP: tap_code16(FR_COLN); register_code16(FR_COLN);
	}
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[5].step) {
		case SINGLE_TAP: unregister_code16(FR_COLN); break;
		case SINGLE_HOLD: unregister_code16(FR_SCLN); break;
		case DOUBLE_TAP: unregister_code16(FR_COLN); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(FR_COLN); break;
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
		tap_code16(FR_CCIRC);
		tap_code16(FR_CCIRC);
		tap_code16(FR_CCIRC);
	}
	if(state->count > 3) {
		tap_code16(FR_CCIRC);
	}
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[7].step = dance_step(state);
	switch (dance_state[7].step) {
		case SINGLE_TAP: register_code16(FR_CCIRC); break;
		case SINGLE_HOLD: register_code16(FR_UMLT); break;
		case DOUBLE_TAP: register_code16(FR_CCIRC); register_code16(FR_CCIRC); break;
		case DOUBLE_SINGLE_TAP: tap_code16(FR_CCIRC); register_code16(FR_CCIRC);
	}
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[7].step) {
		case SINGLE_TAP: unregister_code16(FR_CCIRC); break;
		case SINGLE_HOLD: unregister_code16(FR_UMLT); break;
		case DOUBLE_TAP: unregister_code16(FR_CCIRC); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(FR_CCIRC); break;
	}
	dance_state[7].step = 0;
}

void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(FR_COMM);
		tap_code16(FR_COMM);
		tap_code16(FR_COMM);
	}
	if(state->count > 3) {
		tap_code16(FR_COMM);
	}
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[8].step = dance_step(state);
	switch (dance_state[8].step) {
		case SINGLE_TAP: register_code16(FR_COMM); break;
		case SINGLE_HOLD: register_code16(FR_QUES); break;
		case DOUBLE_TAP: register_code16(FR_COMM); register_code16(FR_COMM); break;
		case DOUBLE_HOLD: register_code16(LSFT(FR_RBRC)); break;
		case DOUBLE_SINGLE_TAP: tap_code16(FR_COMM); register_code16(FR_COMM);
	}
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[8].step) {
		case SINGLE_TAP: unregister_code16(FR_COMM); break;
		case SINGLE_HOLD: unregister_code16(FR_QUES); break;
		case DOUBLE_TAP: unregister_code16(FR_COMM); break;
		case DOUBLE_HOLD: unregister_code16(LSFT(FR_RBRC)); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(FR_COMM); break;
	}
	dance_state[8].step = 0;
}

void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(FR_DOT);
		tap_code16(FR_DOT);
		tap_code16(FR_DOT);
	}
	if(state->count > 3) {
		tap_code16(FR_DOT);
	}
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[9].step = dance_step(state);
	switch (dance_state[9].step) {
		case SINGLE_TAP: register_code16(FR_DOT); break;
		case SINGLE_HOLD: register_code16(FR_EXLM); break;
		case DOUBLE_TAP: register_code16(FR_DOT); register_code16(FR_DOT); break;
		case DOUBLE_HOLD: register_code16(LSFT(RALT(FR_1))); break;
		case DOUBLE_SINGLE_TAP: tap_code16(FR_DOT); register_code16(FR_DOT);
	}
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[9].step) {
		case SINGLE_TAP: unregister_code16(FR_DOT); break;
		case SINGLE_HOLD: unregister_code16(FR_EXLM); break;
		case DOUBLE_TAP: unregister_code16(FR_DOT); break;
		case DOUBLE_HOLD: unregister_code16(LSFT(RALT(FR_1))); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(FR_DOT); break;
	}
	dance_state[9].step = 0;
}

void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(RALT(KC_P));
		tap_code16(RALT(KC_P));
		tap_code16(RALT(KC_P));
	}
	if(state->count > 3) {
		tap_code16(RALT(KC_P));
	}
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[10].step = dance_step(state);
	switch (dance_state[10].step) {
		case SINGLE_TAP: register_code16(RALT(KC_P)); break;
		case SINGLE_HOLD: register_code16(RALT(KC_D)); break;
		case DOUBLE_TAP: register_code16(RALT(KC_P)); register_code16(RALT(KC_P)); break;
		case DOUBLE_SINGLE_TAP: tap_code16(RALT(KC_P)); register_code16(RALT(KC_P));
	}
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[10].step) {
		case SINGLE_TAP: unregister_code16(RALT(KC_P)); break;
		case SINGLE_HOLD: unregister_code16(RALT(KC_D)); break;
		case DOUBLE_TAP: unregister_code16(RALT(KC_P)); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(RALT(KC_P)); break;
	}
	dance_state[10].step = 0;
}

void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_KP_SLASH);
		tap_code16(KC_KP_SLASH);
		tap_code16(KC_KP_SLASH);
	}
	if(state->count > 3) {
		tap_code16(KC_KP_SLASH);
	}
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[11].step = dance_step(state);
	switch (dance_state[11].step) {
		case SINGLE_TAP: register_code16(KC_KP_SLASH); break;
		case SINGLE_HOLD: register_code16(LSFT(RALT(FR_COLN))); break;
		case DOUBLE_TAP: register_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH);
	}
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[11].step) {
		case SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
		case SINGLE_HOLD: unregister_code16(LSFT(RALT(FR_COLN))); break;
		case DOUBLE_TAP: unregister_code16(KC_KP_SLASH); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
	}
	dance_state[11].step = 0;
}

void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_KP_ASTERISK);
		tap_code16(KC_KP_ASTERISK);
		tap_code16(KC_KP_ASTERISK);
	}
	if(state->count > 3) {
		tap_code16(KC_KP_ASTERISK);
	}
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[12].step = dance_step(state);
	switch (dance_state[12].step) {
		case SINGLE_TAP: register_code16(KC_KP_ASTERISK); break;
		case SINGLE_HOLD: register_code16(RALT(FR_DOT)); break;
		case DOUBLE_TAP: register_code16(KC_KP_ASTERISK); register_code16(KC_KP_ASTERISK); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_ASTERISK); register_code16(KC_KP_ASTERISK);
	}
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[12].step) {
		case SINGLE_TAP: unregister_code16(KC_KP_ASTERISK); break;
		case SINGLE_HOLD: unregister_code16(RALT(FR_DOT)); break;
		case DOUBLE_TAP: unregister_code16(KC_KP_ASTERISK); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_ASTERISK); break;
	}
	dance_state[12].step = 0;
}

void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_KP_ASTERISK);
		tap_code16(KC_KP_ASTERISK);
		tap_code16(KC_KP_ASTERISK);
	}
	if(state->count > 3) {
		tap_code16(KC_KP_ASTERISK);
	}
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[13].step = dance_step(state);
	switch (dance_state[13].step) {
		case SINGLE_TAP: register_code16(KC_KP_ASTERISK); break;
		case SINGLE_HOLD: register_code16(RALT(FR_DOT)); break;
		case DOUBLE_TAP: register_code16(KC_KP_ASTERISK); register_code16(KC_KP_ASTERISK); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_ASTERISK); register_code16(KC_KP_ASTERISK);
	}
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[13].step) {
		case SINGLE_TAP: unregister_code16(KC_KP_ASTERISK); break;
		case SINGLE_HOLD: unregister_code16(RALT(FR_DOT)); break;
		case DOUBLE_TAP: unregister_code16(KC_KP_ASTERISK); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_ASTERISK); break;
	}
	dance_state[13].step = 0;
}

void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_KP_SLASH);
		tap_code16(KC_KP_SLASH);
		tap_code16(KC_KP_SLASH);
	}
	if(state->count > 3) {
		tap_code16(KC_KP_SLASH);
	}
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
	dance_state[14].step = dance_step(state);
	switch (dance_state[14].step) {
		case SINGLE_TAP: register_code16(KC_KP_SLASH); break;
		case SINGLE_HOLD: register_code16(LSFT(RALT(FR_COLN))); break;
		case DOUBLE_TAP: register_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_SLASH); register_code16(KC_KP_SLASH);
	}
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state[14].step) {
		case SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
		case SINGLE_HOLD: unregister_code16(LSFT(RALT(FR_COLN))); break;
		case DOUBLE_TAP: unregister_code16(KC_KP_SLASH); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_SLASH); break;
	}
	dance_state[14].step = 0;
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
};
