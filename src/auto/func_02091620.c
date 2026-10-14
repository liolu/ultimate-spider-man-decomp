/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_0213b018;
extern s16 data_02151b20;

void func_02091620(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_0213b018       = 0;
    data_02151b20       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
