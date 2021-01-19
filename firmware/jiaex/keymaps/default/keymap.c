#include QMK_KEYBOARD_H
#include "stdio.h"
#include "config.h"
#include "debug.h"


void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable   = true;
    // debug_matrix   = true;
    // debug_keyboard = true;
}


enum combos {
    CTRL_S_SAVE_1,
    CTRL_S_SAVE_2,
    CTRL_V_PASTE,
    COMMA_WITH_SPACE
};

const uint16_t PROGMEM ctrl_s_combo1[] = {KC_L, KC_S, COMBO_END};
const uint16_t PROGMEM ctrl_s_combo2[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM ctrl_v_combo[] = {KC_X, KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM comma_with_space_combo[] = {KC_COMMA, KC_DOT, COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  [CTRL_S_SAVE_1] = COMBO_ACTION(ctrl_s_combo1),
  [CTRL_S_SAVE_2] = COMBO_ACTION(ctrl_s_combo2),
  [CTRL_V_PASTE] = COMBO_ACTION(ctrl_v_combo),
  [COMMA_WITH_SPACE] = COMBO_ACTION(comma_with_space_combo)
};


void process_combo_event(uint16_t combo_index, bool pressed){
    switch(combo_index) {
        case CTRL_S_SAVE_1:
            if (pressed)
            {
                tap_code16(LCTL(KC_S));
            }
            break;
        case CTRL_S_SAVE_2:
            if (pressed)
            {
                tap_code16(LCTL(KC_S));
            }
            break;
        case CTRL_V_PASTE:
            if (pressed)
            {
                tap_code16(LCTL(KC_V));
            }
            break;
        case COMMA_WITH_SPACE:
            if (pressed)
            {
                SEND_STRING(", ");
            }
            break;
   }

}

bool is_alt_tab_active = false;
bool is_vscode_ctrl_tab_active=false;

LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
    leading = false;
    leader_end();

        SEQ_ONE_KEY(KC_B) {
            register_code(KC_LCTL);
            register_code(KC_B);
            unregister_code(KC_B);
            unregister_code(KC_LCTL);
        }
        // SEQ_TWO_KEYS(KC_D, KC_D) {
        //   SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
        // }
        // SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
        //   SEND_STRING("https://start.duckduckgo.com\n");
        // }
        // SEQ_TWO_KEYS(KC_A, KC_S) {
        //   register_code(KC_LGUI);
        //   register_code(KC_S);
        //   unregister_code(KC_S);
        //   unregister_code(KC_LGUI);
        // }
    }


    if (is_alt_tab_active){
        //second part of prossesing Alt-Tab
        uint8_t r = get_highest_layer(layer_state);
        if (r==LIN || r ==WIN) {
            is_alt_tab_active=false;
            unregister_code(KC_LALT);
        }
    }
    if (is_vscode_ctrl_tab_active){
        //second part of prossesing Alt-Tab
        uint8_t r = get_highest_layer(layer_state);
        if (r==LIN || r ==WIN) {
            is_vscode_ctrl_tab_active=false;
            unregister_code(KC_LCTRL);
        }
    }
}

uint16_t key_timer;

// char r_arrow[1]=">";

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif

    switch (keycode)
    {
    case ALT_TAB:
        //first part of prossessing Alt-Tab.
        if (record->event.pressed) {
                if(!is_alt_tab_active){
                    is_alt_tab_active=true;
                    register_code(KC_LALT);
                }
            register_code(KC_TAB);
        } else {
            unregister_code(KC_TAB);
        }
        break;
    case VSCODE_CTRL_TAB:
        //first part of prossessing Alt-Tab.
        if (record->event.pressed) {
                if(!is_vscode_ctrl_tab_active){
                    is_vscode_ctrl_tab_active=true;
                    register_code(KC_LCTRL);
                }
            register_code(KC_TAB);
        } else {
            unregister_code(KC_TAB);
        }
        break;
    case PROG_RIGHT_ARROW:
        if (record->event.pressed)
        {
            tap_code(KC_MINUS);
            tap_code16(RALT(KC_DOT));
        }
        break;
    case PROG_FAT_RIGHT_ARROW:
        if (record->event.pressed)
        {
            tap_code(KC_EQUAL);
            tap_code16(RALT(KC_DOT));
        }
        break;
    case COPY_URL_IN_BROWSER:
        if  (record->event.pressed){
            tap_code16(KC_F6);
            tap_code16(LCTL(KC_C));
        }
        break;
    default:
        break;
    }
    return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    switch (get_highest_layer(layer_state)) {
        case LIN_SYM:
            oled_write_P(PSTR("Linux symbols\n"), false);
            return;
            break;
        case LIN_FN1:
            oled_write_P(PSTR("Linux FN 1\n"), false);
            return;
            break;
        case LIN_FN2:
            oled_write_P(PSTR("Linux FN 2\n"), false);
            return;
            break;
        case LIN_FN3:
            oled_write_P(PSTR("Linux FN 3\n"), false);
            return;
            break;
         case WIN_SYM:
            oled_write_P(PSTR("Windows symbols\n"), false);
            return;
            break;
        case WIN_FN1:
            oled_write_P(PSTR("Windows FN 1\n"), false);
            return;
            break;
        case WIN_FN2:
            oled_write_P(PSTR("Windows FN 2\n"), false);
            return;
            break;
        case WIN_FN3:
            oled_write_P(PSTR("Windows FN 3\n"), false);
            return;
            break;
        case SPECIAL:
            oled_write_P(PSTR("SPECIAL\n"), false);
            return;
            break;
       default:
            break;
            // Or use the write_ln shortcut over adding '\n' to the end of your string
    }

    if (IS_LAYER_ON_STATE(default_layer_state,WIN)) {
        oled_write_P(PSTR("Windows\n"), false);
    } else if (IS_LAYER_ON_STATE(default_layer_state,LIN)) {
        oled_write_P(PSTR("Linux\n"), false);
    } else if (IS_LAYER_ON_STATE(default_layer_state, MAC)) {
        oled_write_P(PSTR("MacOS\n"), false);
    } else {
    oled_write_ln_P(PSTR("Undefined"), false);
    }

    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.caps_lock ? PSTR("\nCaps Lock is ON\n") : PSTR("\n                "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }
    return rotation;
}

#endif

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OSM(KC_LSFT):
            return TAPPING_TERM + 200;
        default:
            return TAPPING_TERM;
    }
}