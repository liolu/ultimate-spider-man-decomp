#include "m2c.h"

s32 func_02001c0c(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1B8);
    var_r0 = 1;
    if (temp_r1 == 0x1D) {
        return 1;
    }
    if (temp_r1 != 0x1E) {
        var_r0 = 0;
    }
    return var_r0;
}
