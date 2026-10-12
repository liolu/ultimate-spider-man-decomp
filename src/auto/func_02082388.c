#include "m2c.h"

s32 func_02082388(void *arg0) {
    s32 var_r2;
    s32 var_r3;
    void *var_r0;

    var_r0 = arg0;
    var_r3 = 0;
    var_r2 = 0;
    do {
        var_r2 += 1;
        if (M2C_FIELD(var_r0, s32 *, 4) != 0) {
            var_r3 += 1;
        }
        var_r0 += 0x18;
    } while (var_r2 < 2);
    return var_r3;
}
