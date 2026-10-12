#include "m2c.h"

s32 func_02006e7c(void *arg0) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1B8) == 0) {
        var_r0 = 1;
    }
    return var_r0;
}
