#include "m2c.h"

s32 func_0206a718(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = arg0 & (arg1 - 1);
    if (temp_r0 != 0) {
        return arg1 - temp_r0;
    }
    return 0;
}
