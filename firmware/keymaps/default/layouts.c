#include QMK_KEYBOARD_H
#include "config.h"


#define SC_PASTE LCTL(KC_V)

#define LIN_ALT_TAB        LALT(KC_TAB)           //Switch windows Alt+Tab
#define LIN_SW_TO_WS_DOWN  LALT(LCTL(KC_DOWN))    // Switch to workspace down
#define LIN_SW_TO_WS_UP    LALT(LCTL(KC_UP))      //Switch to workspace up
#define LIN_LAUNCHER       LGUI(KC_S)             // Show windows + launcher prompt
#define LIN_TAB_RIGHT      LCTL(KC_PGDOWN)        // Switch browser tab right
#define LIN_TAB_LEFT       LCTL(KC_PGUP)          // Switch browser tab left
#define LIN_MV_DISP_LEFT   LSFT(LGUI(KC_LEFT))    // Move window to display left
#define LIN_MV_DISP_RIGHT  LSFT(LGUI(KC_RIGHT))   // Move window to display right
#define LIN_MV_WS_DOWN     LSFT(LGUI(KC_PGDOWN))  // Move window to workspace down
#define LIN_MV_WS_UP       LSFT(LGUI(KC_PGUP))    // Move window to workspace up
#define LIN_SW_LANG_ENG    RGUI(KC_SPC)           // Switch language to english
#define LIN_CLOSE_WIN      LALT(KC_F4)            // Close window Alt+F4
#define LIN_CLOSE_TAB      LCTL(KC_W)             // Close tab in browser
#define LIN_MAX_WIN        LGUI(KC_UP)            // Maximize window

/*
 #define LIN_  //
*/

#define WIN_ALT_TAB           LALT(KC_TAB)             //Switch windows Alt+Tab
#define WIN_SW_TO_WS_LEFT     LGUI(LCTL(KC_LEFT))      // Switch to workspace left
#define WIN_SW_TO_WS_RIGHT    LGUI(LCTL(KC_RIGHT))     //Switch to workspace right
#define WIN_LAUNCHER          LGUI(KC_TAB)             // Show windows + launcher prompt
#define WIN_TAB_RIGHT         LCTL(KC_PGDOWN)          // Switch browser tab right
#define WIN_TAB_LEFT          LCTL(KC_PGUP)            // Switch browser tab left
#define WIN_MV_DISP_LEFT      LSFT(LGUI(KC_LEFT))      // Move window to display left
#define WIN_MV_DISP_RIGHT     LSFT(LGUI(KC_RIGHT))     // Move window to display right
#define WIN_SW_LANG_ENG       LALT(KC_LSHIFT)          // Switch language to english
#define WIN_CLOSE_WIN         LALT(KC_F4)              // Close window Alt+F4
#define WIN_CLOSE_TAB         LCTL(KC_W)               // Close tab in browser
#define WIN_MAX_WIN           LGUI(KC_UP)              // Maximize window


/*
#define WIN_

#define MAC_   //Switch windows Alt+Tab
#define MAC_   // Switch to workspace down
#define MAC_    //Switch to workspace up
#define MAC_    // Show windows + launcher prompt
#define MAC_    // Switch browser tab right
#define MAC_    // Switch browser tab left
##define MAC_    // Move window to display left
#define MAC_    // Move window to display right
define MAC_     // Move window to workspace down
#define MAC_    // Move window to workspace up
#define MAC_    // Switch language to russian
#define MAC_    // Switch language to english
#define MAC_  // Close window Alt+F4
#define MAC_  // Maximize window
#define MAC_  //
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LIN] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     LCTL(KC_S),         KC_1,          KC_2,               KC_3,               KC_4,         KC_5,                KC_NO,      /* | */      KC_RALT,       KC_6,               KC_7,               KC_8,         KC_9,           KC_0,             LCTL(KC_Z),      /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_Q,          KC_W,               KC_E,               KC_R,         KC_T,             LCTL(KC_X),    /* | */      KC_LEAD,       KC_Y,               KC_U,               KC_I,         KC_O,           KC_P,             KC_LBRC,         KC_RBRC,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,          KC_A,          KC_S,          LT(LIN_FN2,KC_D),        KC_F,         KC_G,             /*NO_KEY*/     /* | */      /*NO_KEY*/     KC_H,               KC_J,               KC_K,         KC_L,           KC_SCOLON,        KC_QUOTE,      RGUI_T(KC_ENTER),
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     LCTL(KC_LSFT),      KC_Z,          KC_X,               KC_C,               KC_V,         KC_B,             LCTL(KC_C),    /* | */    LCTL(KC_S),      KC_N,               KC_M,               KC_COMM,      KC_DOT,         KC_SLSH,       LCTL(KC_BSPACE),    /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/      LCTL(KC_LALT),     KC_LCTL,            KC_LALT,     OSM(MOD_LSFT),        MO(LIN_FN1), LT(LIN_FN3,KC_TAB),/* | */ MT(MOD_LSFT,KC_ESC),LIN_SW_LANG_ENG,LT(LIN_SYM,KC_SPC),     KC_LALT,      KC_RCTL,      RCTL(KC_LSFT)       /*NO_KEY*/       /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[LIN_SYM] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     MO(SPECIAL),     LCTL(KC_1),       LCTL(KC_2),      RALT(KC_3)/*№*/,       KC_NO,         LIN_MAX_WIN,        KC_NO,      /* | */      KC_F14,        KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,            MO(SPECIAL),    /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         RALT(KC_GRAVE),  LSFT(KC_GRAVE),        KC_GRAVE,   RALT(KC_T)/*ё*/,       KC_NO,      /* | */      KC_NO,         KC_NO,              KC_BSLASH,    LSFT(KC_BSLASH), RALT(KC_BSLASH),   KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,     RALT(KC_COMM),      LSFT(KC_9),    LSFT(KC_LBRACKET),   KC_LBRACKET,       KC_MINUS,        /*NO_KEY*/     /* | */    /*NO_KEY*/       KC_EQUAL,           KC_RBRACKET,  LSFT(KC_RBRACKET),  LSFT(KC_0),   LCTL(KC_BSLASH),      KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     LCTL(KC_LSFT),LCTL(RALT(KC_GRAVE)),KC_NO,        PROG_FAT_RIGHT_ARROW, PROG_RIGHT_ARROW,LSFT(KC_MINUS),       KC_NO,      /* | */      KC_NO,       LSFT(KC_EQUAL),   RALT(KC_M)/*ъ*/,   RALT(KC_COMM),    RALT(KC_DOT),    KC_NO,           RCTL(KC_RSFT),    /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/      LCTL(KC_LALT),     KC_LCTL,            KC_LALT,            KC_NO,         KC_NO,          KC_CAPSLOCK,    /* | */      KC_NO,         KC_NO,              KC_RSFT,            KC_LALT,       KC_RCTL,       RCTL(KC_LALT)       /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[LIN_FN1] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     TG(LIN_FN2),        KC_F1,         KC_F2,              KC_F3,              KC_F4,         KC_F5,              KC_NO,      /* | */      KC_NO,         KC_F6,              KC_F7,              KC_F8,         KC_F9,         KC_F10,           LCTL(KC_Y),       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         LIN_TAB_LEFT,  VSCODE_CTRL_TAB,    LIN_TAB_RIGHT,    LIN_CLOSE_TAB,COPY_URL_IN_BROWSER,/* | */   LCTL(KC_HOME),    KC_HOME,            KC_PGDOWN,          KC_PGUP,       KC_END,       LCTL(KC_END),        KC_F11,         KC_F12,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_DELETE,       LCTL(KC_A),      LIN_SW_TO_WS_UP,     ALT_TAB,     LIN_SW_TO_WS_DOWN,  LIN_LAUNCHER,     /*NO_KEY*/      /* | */    /*NO_KEY*/       KC_LEFT,            KC_DOWN,            KC_UP,        KC_RIGHT,       KC_ENTER,           KC_NO,         KC_LGUI,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,       LIN_MV_DISP_LEFT,  LIN_MV_WS_UP,    LIN_MV_WS_DOWN,  LIN_MV_DISP_RIGHT,    KC_NO,         KC_PSCREEN,      /* | */      KC_NO,         LCTL(KC_LEFT),    LCTL(KC_DOWN),    LCTL(KC_UP),   LCTL(KC_RIGHT),    KC_INSERT,          KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/     LCTL(KC_LALT),      KC_LCTL,            KC_LALT,            KC_NO,         KC_NO,              KC_NO,      /* | */      KC_NO,         KC_NO,              KC_LSFT,         KC_LALT,          KC_RCTL,     RCTL(KC_LALT)         /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[LIN_FN2] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     TG(LIN_FN2),        KC_NO,         KC_NO,              KC_NO,         LIN_CLOSE_WIN,      LIN_MAX_WIN,   TG(LIN_FN2),     /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         KC_NO,              KC_UP,         KC_NO,              KC_SPC,        KC_ENTER,        /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_DELETE,          KC_NO,         KC_LEFT,            KC_DOWN,       KC_RIGHT,           KC_NO,         /*NO_KEY*/       /* | */   /*NO_KEY*/        KC_NO,              KC_BSPACE,          KC_NO,         KC_DELETE,     KC_NO,              KC_NO,         KC_ENTER,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,            KC_NO,         KC__MUTE,           KC__VOLDOWN,   KC__VOLUP,          KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/      LCTL(KC_LALT),     KC_LCTL,            KC_LALT,       KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_SPC,             KC_RCTL,       KC_RALT,       KC_RCTL             /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[LIN_FN3] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     MO(SPECIAL),        KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,          KC_NO,         KC_NO,              KC_NO,         KC_NO,            LCTL(KC_EQUAL),  /*NO_KEY*/       /* | */    /*NO_KEY*/       KC_MINUS,           KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_ENTER,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,            KC_NO,         KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,  LCTL(KC_MINUS),  KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/        KC_LCTL,         KC_LALT,            KC_LCTL,       KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_SPC,             KC_RCTL,       KC_RALT,       KC_RCTL             /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[WIN] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     LCTL(KC_S),         KC_1,          KC_2,               KC_3,          KC_4,               KC_5,          KC_NO,           /* | */      KC_NO,         KC_6,               KC_7,               KC_8,          KC_9,          KC_0,               LCTL(KC_Z),    /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_Q,          KC_W,               KC_E,          KC_R,               KC_T,          LCTL(KC_X),      /* | */      KC_LEAD,       KC_Y,               KC_U,               KC_I,          KC_O,          KC_P,               KC_LBRC,       KC_RBRC,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,          KC_A,          KC_S,           LT(WIN_FN2,KC_D),  KC_F,               KC_G,          /*NO_KEY*/       /* | */   /*NO_KEY*/        KC_H,               KC_J,               KC_K,          KC_L,          KC_SCOLON,          KC_QUOTE,    RGUI_T(KC_ENTER),
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     LCTL(KC_LSFT),      KC_Z,          KC_X,               KC_C,          KC_V,               KC_B,          LCTL(KC_C),      /* | */     LCTL(KC_C),     KC_N,               KC_M,               KC_COMM,       KC_DOT,        KC_SLSH,        LCTL(KC_BSPACE),   /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/      LCTL(KC_LALT),     KC_LCTL,            KC_LALT,       OSM(MOD_LSFT),    MO(WIN_FN1),   LT(WIN_FN3,KC_TAB),/* | */ MT(MOD_LSFT,KC_ESC),WIN_SW_LANG_ENG,LT(WIN_SYM,KC_SPC),     KC_LALT,       KC_RCTL,       RCTL(KC_LSFT)       /*NO_KEY*/    /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[WIN_SYM] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     MO(SPECIAL),     LCTL(KC_1),       LCTL(KC_2),      RALT(KC_3)/*№*/,  KC_NO,              WIN_MAX_WIN,   KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              MO(SPECIAL),   /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         RALT(KC_GRAVE),  LSFT(KC_GRAVE),   KC_GRAVE,        RALT(KC_T)/*ё*/,  KC_NO,           /* | */      KC_NO,         KC_NO,              KC_BSLASH,    LSFT(KC_BSLASH), RALT(KC_BSLASH),   KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,      RALT(KC_COMM),     LSFT(KC_9),  RALT(LSFT(KC_LBRACKET)),RALT(KC_LBRACKET),KC_MINUS,       /*NO_KEY*/      /* | */    /*NO_KEY*/       KC_EQUAL,      RALT(KC_RBRACKET),RALT(LSFT(KC_RBRACKET)),LSFT(KC_0),  KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
   LCTL(KC_LSFT), LCTL(RALT(KC_GRAVE)), KC_NO,       PROG_FAT_RIGHT_ARROW,PROG_RIGHT_ARROW,   LSFT(KC_MINUS), KC_NO,           /* | */      KC_NO,        LSFT(KC_EQUAL),  RALT(KC_M)/*ъ*/, RALT(KC_COMM),      RALT(KC_DOT),    KC_NO,          RCTL(KC_RSFT),     /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/     LCTL(KC_LALT),      KC_LCTL,            KC_LALT,       KC_NO,              KC_NO,         KC_F24,          /* | */      KC_NO,         KC_NO,              KC_RSFT,            KC_LALT,      KC_RCTL,        RCTL(KC_LALT)       /*NO_KEY*/     /*NO_KEY*/
//                                                                                                     /*Sharpkeys F24->CapsLock*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[WIN_FN1] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     TG(WIN_FN2),        KC_F1,         KC_F2,              KC_F3,         KC_F4,              KC_F5,         KC_NO,           /* | */      KC_NO,         KC_F6,              KC_F7,              KC_F8,         KC_F9,         KC_F10,             LCTL(KC_Y),    /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,       WIN_TAB_LEFT,     VSCODE_CTRL_TAB,   WIN_TAB_RIGHT,    WIN_CLOSE_TAB,COPY_URL_IN_BROWSER,/* | */    LCTL(KC_HOME),   KC_HOME,            KC_PGDOWN,          KC_PGUP,       KC_END,       LCTL(KC_END),        KC_F11,        KC_F12,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_DELETE,       LCTL(KC_A),    WIN_SW_TO_WS_LEFT,   ALT_TAB,       WIN_SW_TO_WS_RIGHT, WIN_LAUNCHER,    /*NO_KEY*/       /* | */      /*NO_KEY*/     KC_LEFT,            KC_DOWN,            KC_UP,         KC_RIGHT,      KC_ENTER,           KC_NO,         KC_LGUI,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,      WIN_MV_DISP_LEFT,    KC_NO,              KC_NO,       WIN_MV_DISP_RIGHT,    KC_MINUS,      KC_PSCREEN,      /* | */      KC_NO,         LCTL(KC_LEFT),   LCTL(KC_DOWN),      LCTL(KC_UP),   LCTL(KC_RIGHT),   KC_INSERT ,         KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/      LCTL(KC_LALT),     KC_LCTL,            KC_LALT,       KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_LSHIFT,          KC_LALT,       KC_RCTL,      RCTL(KC_LALT)        /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[WIN_FN2] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     TG(WIN_FN2),        KC_NO,         KC_NO,              KC_NO,         WIN_CLOSE_WIN,      WIN_MAX_WIN,   TG(WIN_FN2),     /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         KC_NO,              KC_UP,         KC_NO,              KC_SPC,        KC_RETURN,       /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_DELETE,          KC_NO,         KC_LEFT,            KC_DOWN,       KC_RIGHT,           KC_NO,         /*NO_KEY*/       /* | */   /*NO_KEY*/        KC_NO,              KC_BSPACE,          KC_NO,        KC_DELETE,      KC_NO,              KC_NO,         KC_ENTER,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,            KC_NO,         KC__MUTE,         KC__VOLDOWN,     KC__VOLUP,          KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/      LCTL(KC_LALT),     KC_LCTL,            KC_LALT,       KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_SPC,             KC_RCTL,       KC_RALT,       KC_RCTL             /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[WIN_FN3] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐          ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     MO(SPECIAL),        KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,          KC_NO,         KC_NO,              KC_NO,         KC_NO,            LCTL(KC_EQUAL),  /*NO_KEY*/       /* | */    /*NO_KEY*/       KC_MINUS,           KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_ENTER,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,            KC_NO,         KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,  LCTL(KC_MINUS),  KC_NO,           /* | */      KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤  /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/        KC_LCTL,         KC_LALT,            KC_LCTL,       KC_NO,              KC_NO,         KC_NO,           /* | */      KC_NO,         KC_NO,              KC_SPC,             KC_RCTL,       KC_RALT,       KC_RCTL             /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘  /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

[SPECIAL] = LAYOUT(
//┌───────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┐         ┌───────────────┬─────────────────┬─────────────────┬─────────────────┬───────────────┬────────────────┬──────────────────┬───────────────┐
     KC_NO,              DF(LIN),       DF(WIN),            KC_NO,         KC_NO,              KC_NO,         RESET,          /* | */       RESET,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤ /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_ESC,             KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         KC_NO,          /* | */       KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_PAUSE,           KC_NO,         KC_NO,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤ /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_BSPACE,          KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         /*NO_KEY*/      /* | */   /*NO_KEY*/         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_NO,         KC_ENTER,
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤ /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     KC_LSFT,            KC_NO,         KC_NO,              KC_NO,         KC_NO,              KC_NO,         KC_NO,          /* | */       KC_NO,         KC_NO,              KC_NO,              KC_NO,         KC_NO,         KC_NO,              KC_RSFT,       /*NO_KEY*/
//├───────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┤ /* | */ ├───────────────┼─────────────────┼─────────────────┼─────────────────┼───────────────┼────────────────┼──────────────────┼───────────────┤
     /*NO_KEY*/          KC_LCTL,       KC_LALT,            KC_LCTL,       KC_NO,              KC_NO,         KC_NO,          /* | */       KC_NO,         KC_NO,              KC_SPC,             KC_RCTL,       KC_RALT,       KC_RCTL             /*NO_KEY*/     /*NO_KEY*/
//└───────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┘ /* | */ └───────────────┴─────────────────┴─────────────────┴─────────────────┴───────────────┴────────────────┴──────────────────┴───────────────┘
),

};



