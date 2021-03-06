// Register the double tap dances:
qk_tap_dance_action_t tap_dance_actions[] = {
    [EQL_PLUS]  = ACTION_TAP_DANCE_DOUBLE(KC_EQL,  KC_PLUS),
    [MINS_UNDS] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_UNDS),
    [SLSH_BSLS] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    [GRV_TILD]  = ACTION_TAP_DANCE_DOUBLE(KC_GRV,  KC_TILD),
    [ASTR_CIRC] = ACTION_TAP_DANCE_DOUBLE(KC_ASTR, KC_CIRC),
    [APMR_PIPE] = ACTION_TAP_DANCE_DOUBLE(KC_AMPR, KC_PIPE),
    [EXLM_QUES] = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, KC_QUES),
    [HASH_PERC] = ACTION_TAP_DANCE_DOUBLE(KC_HASH, KC_PERC),
    [AT_DLR]    = ACTION_TAP_DANCE_DOUBLE(KC_AT,   KC_DLR),
    [LPRN_LBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LBRC),
    [RPRN_RBRC] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RBRC),
    [LCBR_LABK] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_LABK),
    [RCBR_RABK] = ACTION_TAP_DANCE_DOUBLE(KC_RCBR, KC_RABK),
    [SCLN_COLN] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, scln_coln_finished,       scln_coln_reset,      DANCING_TERM),
    [QUOT_DQUO] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, quot_dquot_finished,      quot_dquot_reset,     DANCING_TERM),
    [DOT_COMM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, dot_comm_finished,        dot_comm_reset,       DANCING_TERM),
    [NONE_LEAD] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, none_lead_finished,       none_lead_reset,      DANCING_TERM),
    [U_ARR_GUI] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, u_arrows_gui_finished,    u_arrows_gui_reset,   DANCING_TERM),
    [H_MOU_GUI] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, h_mouse_gui_finished,     h_mouse_gui_reset,    DANCING_TERM),
    [J_MED_MEH] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, j_media_meh_finished,     j_media_meh_reset,    DANCING_TERM),
    [W_MED_MEH] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, w_media_meh_finished,     w_media_meh_reset,    DANCING_TERM),
    [K_NUM_HYP] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, k_numpad_hyper_finished,  k_numpad_hyper_reset, DANCING_TERM),
    [M_CHO_HYP] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, m_chords_hyper_finished,  m_chords_hyper_reset, DANCING_TERM),
};
