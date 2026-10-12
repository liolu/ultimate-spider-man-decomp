#include "m2c.h"

s32 func_02082090(void *arg0) {
    s32 var_r0;

    var_r0 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) >= 0x50) {
        var_r0 = 0;
    }
    return var_r0;
}
