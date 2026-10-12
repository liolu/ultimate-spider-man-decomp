#include "m2c.h"

s32 func_02015034(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x18);
    var_r2 = 0;
    if (temp_r1 > 0) {
        var_r2 = M2C_FIELD((arg0 + ((temp_r1 - 1) * 4)), s32 *, 4);
    }
    return var_r2;
}
