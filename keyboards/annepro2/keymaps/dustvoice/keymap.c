#include QMK_KEYBOARD_H
#include "annepro2.h"
#include "qmk_ap2_led.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
    // Default base layer
    [0] = KEYMAP(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────────┐
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_MINS,  KC_EQL,   KC_BSPC,
    //├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────────┤
          KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC, KC_RBRC, KC_BSLS,
    //├────────────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴────────┤
          KC_CAPS,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,     KC_ENT,
    //├─────────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────────────────┤
            KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH,       KC_RSFT,
    //├────────┬────────┬┴───────┬┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴──┬─────┴──┬─────┴──┬────────┬────────┤
       KC_LCTL, KC_LALT,  MO(1),                               KC_SPC,                                MO(1),  KC_RALT, KC_RCTL, KC_LGUI
    //└────────┴────────┴────────┴──────────────────────────────────────────────────────────────────┴────────┴────────┴────────┴────────┘
    ),

    // First function layer (temporary), with some special characters, arrow keys and further layer switching
    [1] = KEYMAP(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────────┐
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_MINS,  KC_EQL,  KC_NO,    KC_BSPC,
    //├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────────┤
          KC_TAB,    KC_NO,   TO(3),   TO(2),   TO(5),   TO(4),   TO(4),   TO(5),   TO(2),   TO(3),  KC_LBRC, KC_RBRC,  KC_NO,   KC_NO,
    //├────────────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴────────┤
          KC_F13,     KC_NO,  KC_LEFT,  KC_UP,  KC_DOWN, KC_RGHT, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,  KC_NO,   KC_DEL,      KC_DEL,
    //├─────────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────────────────┤
            KC_LSFT,       KC_INS, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_INS,       KC_RSFT,
    //├────────┬────────┬┴───────┬┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴──┬─────┴──┬─────┴──┬────────┬────────┤
       KC_LCTL, KC_LALT, KC_TRNS,                              KC_SPC,                               KC_TRNS, KC_RALT, KC_RCTL, KC_LGUI
    //└────────┴────────┴────────┴──────────────────────────────────────────────────────────────────┴────────┴────────┴────────┴────────┘
    ),

    // Mouse layer, with F1-F15 keys
    [2] = KEYMAP(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────────┐
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO,   KC_NO,    KC_BSPC,
    //├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────────┤
          KC_TAB,    KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴────────┤
           KC_F13,    KC_NO,  KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  KC_NO,   KC_NO,       KC_NO,
    //├─────────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────────────────┤
            KC_LSFT,       KC_NO,  KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,  KC_NO,        KC_RSFT,
    //├────────┬────────┬┴───────┬┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴──┬─────┴──┬─────┴──┬────────┬────────┤
       KC_BTN3, KC_BTN2,  MO(5),                              KC_BTN1,                                MO(5),  KC_BTN2, KC_BTN3, KC_LGUI
    //└────────┴────────┴────────┴──────────────────────────────────────────────────────────────────┴────────┴────────┴────────┴────────┘
    ),

    // Numpad layer
    [3] = KEYMAP(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────────┐
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,  KC_NO,   KC_NO,   KC_NO,    KC_BSPC,
    //├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────────┤
          KC_TAB,    KC_NO,  KC_PAUS, KC_SLCK, KC_PSCR, KC_INS,   KC_P7,   KC_P8,   KC_P9,  KC_PPLS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴────────┤
           KC_F13,    KC_NO,  KC_LEFT,  KC_UP,  KC_DOWN, KC_RGHT,  KC_P4,   KC_P5,   KC_P6,  KC_PPLS, KC_COMM,  KC_NO,       KC_NO,
    //├─────────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────────────────┤
            KC_LSFT,      KC_NO,   KC_HOME, KC_PGUP, KC_PGDN,  KC_END,  KC_P1,   KC_P2,   KC_P3,   KC_ENT,  KC_NO,        KC_RSFT,
    //├────────┬────────┬┴───────┬┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴──┬─────┴──┬─────┴──┬────────┬────────┤
       KC_LCTL, KC_LALT,  MO(5),                               KC_SPC,                                MO(5),   KC_P0,  KC_PDOT, KC_LGUI
    //└────────┴────────┴────────┴──────────────────────────────────────────────────────────────────┴────────┴────────┴────────┴────────┘
    ),

    // Admin layer
    [4] = KEYMAP(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────────┐
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_BSPC,
    //├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────────┤
          KC_TAB,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   NK_ON,   NK_OFF,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //├────────┬───┴──┬─────┴─────┬──┴───┬────┴────────┴┬───────┴─────┬──┴────────┴─┬──────┴───────┬┴─────┬──┴────────┼────────┬─┴──────┬───┴────┐
        RESET, EEP_RST,KC_AP2_USB, KC_NO, KC_AP_LED_OFF, KC_AP_LED_ON, KC_AP_LED_ON, KC_AP_LED_OFF, KC_NO, KC_AP2_USB,  KC_NO,  EEP_RST, RESET,
    //├────────┼──────┴────┬──────┴────┬─┴─────────┬────┴──────┬──────┴──────────┬──┴──────────────┼──────┴────┬──────┴────┬───┴───────┬┴────────┴─┬────────┐
       KC_LSFT, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_AP2_BT_UNPAIR, KC_AP2_BT_UNPAIR, KC_AP2_BT4, KC_AP2_BT3, KC_AP2_BT2, KC_AP2_BT1, KC_RSFT,
    //├────────┼────────┬──┴─────┬─────┴───────────┴───────────┴─────────────────┴─────────────────┴┬────────┬─┴──────┬────┴───┬───────┴┬──────────┴────────┘
       KC_LCTL, KC_LALT,  MO(5),                               KC_SPC,                                MO(5),  KC_RALT, KC_RCTL, KC_LGUI
    //└────────┴────────┴────────┴──────────────────────────────────────────────────────────────────┴────────┴────────┴────────┴────────┘
    ),

    // Mirror of function layer (toggle) and to serve as a function layer for other layers
    [5] = KEYMAP(
    //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────────┐
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_MINS,  KC_EQL,  KC_NO,    KC_BSPC,
    //├────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────┴───┬────────┤
          KC_TAB,    KC_NO,   TO(3),   TO(2),   TO(0),   TO(4),   TO(4),   TO(0),   TO(2),   TO(3),  KC_LBRC, KC_RBRC,  KC_NO,   KC_NO,
    //├────────────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴┬───────┴────────┤
          KC_F13,     KC_NO,  KC_LEFT,  KC_UP,  KC_DOWN, KC_RGHT, KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,  KC_NO,   KC_DEL,      KC_DEL,
    //├─────────────┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────┬───┴────────────────┤
            KC_LSFT,       KC_INS, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_INS,       KC_RSFT,
    //├────────┬────────┬┴───────┬┴────────┴────────┴────────┴────────┴────────┴────────┴────────┴──┬─────┴──┬─────┴──┬────────┬────────┤
       KC_LCTL, KC_LALT, KC_TRNS,                              KC_SPC,                               KC_TRNS, KC_RALT, KC_RCTL, KC_LGUI
    //└────────┴────────┴────────┴──────────────────────────────────────────────────────────────────┴────────┴────────┴────────┴────────┘
    )
};
// clang-format on
const uint16_t keymaps_size = sizeof(keymaps);

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool is_caps_set = false;

bool led_is_rdy = false;

void enableLayerColor(uint8_t hue, uint8_t sat, uint8_t val) {
    if (is_caps_set) {
        annepro2LedSetHSV(0xFF, 0xFF, val);
    } else {
        annepro2LedSetHSV(hue, sat, val);
    }
}

void keyboard_post_init_user(void) {
    annepro2LedEnable();
    led_is_rdy = true;
}

void set_led_depend_state(uint8_t layer) {
    switch (layer) {
        case 0:
            enableLayerColor(245, 0xFF, 0xFF);
            break;
        case 1:
            enableLayerColor(215, 0xFF, 0xFF);
            break;
        case 2:
            enableLayerColor(215, 0x00, 0xFF);
            break;
        case 3:
            enableLayerColor(130, 0x00, 0xFF);
            break;
        case 4:
            enableLayerColor(45, 0xFF, 0xFF);
            break;
        case 5:
            enableLayerColor(215, 0xFF, 0xFF);
            break;
        default:
            enableLayerColor(245, 0xFF, 0xFF);
            break;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    if (led_is_rdy) {
        uint8_t layer = biton32(state);

        set_led_depend_state(layer);
    }

    return state;
}

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_CAPS_LOCK) && biton32(layer_state) == 0) {
        is_caps_set = true;
        enableLayerColor(0xFF, 0xFF, 0xFF);
    } else {
        is_caps_set = false;
        layer_state_set_user(layer_state);
    }
}
