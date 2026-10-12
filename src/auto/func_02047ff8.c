#include "m2c.h"

s32 func_02047ff8(void *arg0, s32 arg1) {
    s32 var_r2;

    if ((arg1 >= 0) && (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x10))) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x14);
    }
    return var_r2;
}
