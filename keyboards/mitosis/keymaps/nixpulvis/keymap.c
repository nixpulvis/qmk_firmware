#include QMK_KEYBOARD_H

enum mitosis_layers
{
  _BASE,
  _QWERTY,
  _UPPER,
  _CORNER,
  _FUNC,
  _ARROW,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,

    KC_LGUI,    KC_LALT,    KC_LCTL,     KC_TAB,    KC_ESC,  KC_RCTL, KC_DEL,  _______,
    TG(_ARROW), MO(_UPPER), MO(_CORNER), _______,   _______, KC_ENT, KC_BSPC, _______
    ),

  [_QWERTY] = LAYOUT(
      KC_Q,        KC_W,   KC_E,   KC_R,   KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
      KC_A,        KC_S,   KC_D,   KC_F,   KC_G,      KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN,
      SFT_T(KC_Z), KC_X,   KC_C,   KC_V,   KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT, SFT_T(KC_SLSH),

            _______,  _______, _______, _______,      _______, _______, _______, KC_BSLS,
            _______, _______, _______,  KC_SPC,        KC_SPC,  _______, _______,  KC_GRV
  ),

  [_UPPER] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,

            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_CORNER] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC,
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, KC_SCLN, KC_QUOT,

            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_FUNC] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F12,

            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_ARROW] = LAYOUT(
    XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_LSFT, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            _______, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  )
};

void matrix_init_user(void)
{
  // By default we want both the _BASE (thumbs) layer, and the _QWERTY
  // standard layout.
  layer_state = 0x00000003;
}

