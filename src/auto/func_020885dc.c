#include "m2c.h"

s32 func_020885dc(void *arg0) {
    s32 var_r2;
    u16 var_r3;
    u8 temp_r1;

    var_r3 = 0;
    var_r2 = 0;
    do {
        temp_r1 = M2C_FIELD((arg0 + var_r2), u8 *, 0x514);
        var_r2 += 1;
        if (temp_r1 == 1) {
            var_r3 += 1;
        }
    } while (var_r2 < 2);
    if (var_r3 == (M2C_FIELD(arg0, u16 *, 0x1C) + 1)) {
        return 1;
    }
    return 0;
}
