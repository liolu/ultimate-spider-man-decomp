#include "m2c.h"

s32 func_02048054(void *arg0, u32 arg1) {
    s32 var_r3;

    var_r3 = 1;
    if (arg1 > (u32) ((u32) *M2C_FIELD(arg0, u32 **, 4) >> 8)) {
        var_r3 = 0;
    } else {
        M2C_FIELD(arg0, u32 *, 0xC) = arg1;
    }
    return var_r3;
}
