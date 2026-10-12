#include "m2c.h"

s32 func_0204d5e8(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x390) - M2C_FIELD(arg0, s32 *, 0x4C);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    return var_r0;
}
