#include "m2c.h"

s32 func_02076c5c(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    switch (arg1) {                                 /* irregular */
    case 0:
        return var_r0;
    case 2:
        var_r0 += 8;
        /* fallthrough */
    default:
        return var_r0;
    case 1:
        return var_r0 + 4;
    }
}
