/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020335e8();                                /* extern */

s32 func_0205de6c(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x700) != 0) && ((u32) (arg1 - 0x43) <= 5U)) {
        return 0;
    }
    return func_020335e8(arg0, arg1);
}
