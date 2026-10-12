/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffbcb8();                                /* extern */

s32 func_0203d264(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x17C) > func_01ffbcb8()) {
        return 1;
    }
    return 0;
}
