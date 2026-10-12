/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209b5c4(s32);                             /* extern */
s32 func_0209bd6c();                                /* extern */

s32 func_0209c5a4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        if (func_0209b5c4(M2C_FIELD(arg0, s32 *, 0x10)) == 0) {
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        goto block_6;
    }
block_6:
    if ((1 << M2C_FIELD(arg0, s32 *, 0)) & func_0209bd6c()) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return 0;
}
