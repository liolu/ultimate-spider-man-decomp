/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_02119e30;

u32 func_02065730(void) {
    u32 temp_r0;

    temp_r0 = (data_02119e30 * 0x41C64E6D) + 0x3039;
    data_02119e30 = temp_r0;
    return temp_r0 >> 0x11;
}
