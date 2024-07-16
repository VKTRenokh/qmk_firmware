// NOTE: note just for me: edit this file only with helix
#include QMK_KEYBOARD_H

#define RGB_DISABLE_TIMEOUT 1000
#define DONT_LIGHT_UP_PIN ;

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0: Base Layer
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
                                    KC_LGUI,  MO(1),   KC_SPC,  KC_ENT,  MO(2),  KC_RALT
    ),

    // Layer 1: Number layer
    [1] = LAYOUT_split_3x6_3(
        KC_TAB,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_LCTL,  KC_ESC,  KC_MS_LEFT,KC_MS_DOWN,KC_MS_UP,KC_MS_RIGHT,KC_LEFT, KC_DOWN,  KC_UP,   KC_RIGHT, XXXXXXX, KC_CAPS,
        KC_LSFT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CW_TOGG,
                                    KC_LGUI,  _______, KC_SPC,  KC_ENT,  MO(3),  KC_LGUI
    ),

    // Layer 2: Symbols Layer
    [2] = LAYOUT_split_3x6_3(
        KC_TAB,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        KC_LCTL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        KC_LSFT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                                    KC_LGUI,  MO(3),   KC_SPC,  KC_ENT,  _______, KC_RALT
    ),

    // Layer 3: Functinal layer
    [3] = LAYOUT_split_3x6_3(
        QK_BOOT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, KC_MS_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_TOG,  RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,       XXXXXXX, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, XXXXXXX, XXXXXXX,
        RGB_MOD,  RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                KC_LGUI,  _______, KC_MS_BTN1,  KC_MS_BTN2,  _______, KC_RALT
    )
};
// clang-format on

#ifdef DONT_LIGHT_UP_PIN
void keyboard_pre_init_user(void) {
    setPinOutput(24);

    writePinHigh(24);
}
#endif
