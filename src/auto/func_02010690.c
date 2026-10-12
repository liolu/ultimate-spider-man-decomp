#include "m2c.h"

s32 func_02010690(void *arg0) {
    s32 var_r0;

    var_r0 = 2;
    if (M2C_FIELD(arg0, s32 *, 0x778) == 2) {
        var_r0 = 3;
    }
    return var_r0;
}
