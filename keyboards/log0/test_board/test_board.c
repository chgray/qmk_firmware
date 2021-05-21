#include "lkey_1b.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
	matrix_init_user();

    uprintf("Welcome to Logan Keyboard v1.0!!!!");
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
