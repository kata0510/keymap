#include "lets_split.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1

#define _______ KC_TRNS
#define XXXXXXX KC_NO

// for MacOS
//#define NEXTTAB ACTION_MODS_KEY(MOD_LGUI, KC_RCBR)
//#define PREVTAB ACTION_MODS_KEY(MOD_LGUI, KC_LCBR)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------, ,-----------------------------------------,
 * | Esc  |   Q  |   W  |   E  |   R  |   T  | |   Y  |   U  |   I  |   O  |   P  |  BS  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  | |   H  |   J  |   K  |   L  |   ;  |  '"  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | LOWER|   Z  |   X  |   C  |   V  |   B  | |   N  |   M  |   ,  |   .  |   /  |  -_  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |  `~  | CTRL | Alt  |Shift |   ⌘  |Space | |Enter |   ⌘  |   ←  |   ↓  |   ↑  |   ↓  |
 * `-----------------------------------------' `-----------------------------------------'
 */
 [_QWERTY] = KEYMAP( \
   KC_ESC,     KC_Q,     KC_W,    KC_E,    KC_R,     KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
   KC_TAB,     KC_A,     KC_S,    KC_D,    KC_F,     KC_G,     KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
   MO(_LOWER), KC_Z,     KC_X,    KC_C,    KC_V,     KC_B,     KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS, \
   KC_GRV,     KC_LCTRL, KC_LALT, KC_LSFT, KC_LGUI,  KC_SPACE, KC_ENT, KC_RGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT \
  ),


  /* Lower 
   * ,-----------------------------------------, ,-----------------------------------------,
   * |      |   1  |   2  |   3  |   4  |   5  | |   6  |   7  |   8  |   9  |   0  |      |
   * |------+------+------+------+------+------| |------+------+------+------+------+------|
   * |      |   !  |   @  |   #  |   $  |   %  | |   ^  |   &  |   *  |   (  |   )  |      |
   * |------+------+------+------+------+------| |------+------+------+------+------+------|
   * |      |   ~  |   `  |   |  |   \  |      | |      |   [  |   ]  |   {  |   }  |      |
   * |------+------+------+------+------+------| |------+------+------+------+------+------|
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
   * `-----------------------------------------' `-----------------------------------------'
   */
  [_LOWER] = KEYMAP( \
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN, KC_RPRN, _______, \
    _______, KC_TILD, KC_GRV,  KC_PIPE, KC_BSLS, _______, _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12   \
  )
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}