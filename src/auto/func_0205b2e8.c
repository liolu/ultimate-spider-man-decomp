/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205b32c();                                /* extern */

s32 func_0205b2e8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x558);
    if ((func_0205b32c() != 0) && (temp_r4 < (s32) M2C_FIELD(arg0, s32 *, 0x6E8))) {
        return 1;
    }
    return 0;
}
