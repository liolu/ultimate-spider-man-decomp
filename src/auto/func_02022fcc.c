#include "m2c.h"

s32 func_02022fcc(void *arg0) {
    s32 var_r2;

    var_r2 = 0x14;
    if (M2C_FIELD(arg0, u8 *, 0x776) != 0) {
        var_r2 = 0x1A0;
    } else if (M2C_FIELD(arg0, u8 *, 0x777) != 0) {
        var_r2 = 0x1A4;
    }
    return var_r2;
}
