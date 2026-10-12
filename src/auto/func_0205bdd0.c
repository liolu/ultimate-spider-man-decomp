/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006e7c();                                /* extern */

s32 func_0205bdd0(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1B8);
    if ((temp_r1 == 0xA) || (temp_r1 == 0x18) || (temp_r1 == 0x1A)) {
        return 1;
    }
    return func_02006e7c(arg0);
}
