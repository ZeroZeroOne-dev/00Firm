#include QMK_KEYBOARD_H

led_config_t g_led_config = {
    {}, 
    {{0, 32}, {0, 48}, {49, 48}, {98, 48}, {146, 48}, {195, 48}, {244, 38}},
    {0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02}
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(0, 255, 255, 255);
    } else {
        rgb_matrix_set_color(0, 0, 0, 0);
    }
    
    return false;
}
