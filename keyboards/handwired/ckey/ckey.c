#include "ckey.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
	matrix_init_user();

    int i=9000;
    for(;i>0;--i){
        uprintf("Booting CKEY in %d\r\n", i);
    }
}
