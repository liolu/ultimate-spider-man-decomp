#include "m2c.h"

void func_02014cf8(void *arg0, s32 *arg1) {
    s32 temp_r2;
    s32 var_r1;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_r2 == 0) {
        return;
    }
    var_r1 = *arg1;
    if (var_r1 <= temp_r2) {
        var_r1 = temp_r2;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r1;
}
