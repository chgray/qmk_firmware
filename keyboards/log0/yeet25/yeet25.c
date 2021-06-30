#include "yeet25.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
	matrix_init_user();

    uprintf("Welcome to Logan Keyboard v1.0!!!!");

#if 1
#ifdef BACKLIGHT_ENABLE
    backlight_enable();
    backlight_level(5);
#endif
#ifdef RGBLIGHT_ENABLE
    rgblight_enable();
    rgblight_sethsv(0, 255, 255);

//#ifdef RGBLIGHT_ANIMATIONS

    rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL + 2);
//#endif
#endif
#endif

 /*   int i=6000;
    for(;i>0;--i){
        #if VIA_ENABLE
            uprintf("Booting VIA:CKEY in %d\r\n", i);
        #else
            uprintf("Booting NO_VIAL:CKEY in %d\r\n", i);
        #endif
    }
*/
}
