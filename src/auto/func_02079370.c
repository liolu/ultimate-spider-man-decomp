#include "m2c.h"

s32 func_02079370(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r0;

    if (arg0 != 0) {
        if (arg4 < arg3) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (arg1 != 0) {
        return 1;
    }
    if (arg2 != 0) {
        return 0;
    }
    if (arg3 == -1) {
        return 1;
    }
    if (arg4 == -1) {
        return 0;
    }
    if (arg4 < arg3) {
        return 1;
    }
    return 0;
}
