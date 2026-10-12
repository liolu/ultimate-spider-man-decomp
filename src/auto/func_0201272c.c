#include "m2c.h"

s32 func_0201272c(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 > (s32) M2C_FIELD(arg0, s32 *, 0x4C)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x15E) != var_r1) {
        return 1;
    }
    return 0;
}
