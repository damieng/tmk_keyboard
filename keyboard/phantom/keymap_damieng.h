// Phantom damieng ISO-150
/*
     * damieng:
     *
     * ,-----------------------------------------------------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `-----------------------------------------------------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------.
     * |~  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  Backs| |Ins|Hom|PgU|
     * |-----------------------------------------------------------| |-----------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     | |Del|End|PgD|
     * |------------------------------------------------------     |-----------|
     * |Cap   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #| Ret| |Ply|Up |Vo+|
     * |-----------------------------------------------------------| |-----------|
     * |LShft|\ |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  R Shift | |Lft|Fn |Rgh|
     * |-----------------------------------------------------------| |-----------|
     * |Ctrl |Gui|Alt  |            SpaceSpc       |Alt  |Gui|Ctrl | |Nxt|Dow|Vo-|
     * `-----------------------------------------------------------' `-----------'
     */
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty + a few media keys */
    KEYMAP(\
        ESC, TRNS, F1, F2,  F3,  F4,  TRNS, F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,SLCK,BRK,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,BSPC, INS, HOME,PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,ENT,       DEL, END, PGDN, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,       MPLY,UP,  VOLU, \
        LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,RSFT,      LEFT,FN0, RGHT, \
        LCTL,LGUI,LALT,SPC,      SPC,SPC,SPC,             TRNS,RALT,RGUI,RCTL,      MNXT,DOWN,VOLD),
    /* 1: media keys + additional modes */
    KEYMAP(\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,FN2, SLEP, \
        FN1, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      MSTP,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,          TRNS,TRNS,APP ,TRNS,      MPRV,TRNS,MUTE),
    /* 2: make grave = 1 for frantic FPS */
    KEYMAP(\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS, \
        1,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS,FN1, TRNS, \
        TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS,      TRNS,TRNS,TRNS),
    /* 3: numeric keypad */
    KEYMAP(\
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,FN2 ,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, PAST,PMNS,PPLS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PENT,      P7,  P8,  P9,   \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PENT,      P4,  P5,  P6,   \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      P1,  P2,  P3,   \
        TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TAB,       PEQL,P0,  PDOT)
};
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2),
    [2] = ACTION_LAYER_TOGGLE(3)
};
