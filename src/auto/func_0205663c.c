#include "m2c.h"

s32 func_0205663c(void *arg0) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 != 0) {
        return temp_r1;
    }
    var_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_r1;
}
