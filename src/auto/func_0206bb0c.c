#include "m2c.h"

s32 func_0206bb0c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < 0x41) {
        return var_r0;
    }
    if (var_r0 <= 0x5A) {
        var_r0 += 0x20;
    }
    return var_r0;
}
