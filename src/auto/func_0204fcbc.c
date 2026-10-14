/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020278fc(s32);                           /* extern */

void func_0204fcbc(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_2;
    s32 temp_r1;
    s32 var_r4;
    s32 var_r5;
    void *temp_r0;

    var_r5  = arg1;
    var_r4  = arg2;
    temp_r0 = func_020278fc(M2C_FIELD(arg0, s32 *, 0x2C));
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0);
    if (var_r5 <= temp_r1) {
        var_r5 = temp_r1;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r5;
    temp_r0_2                    = M2C_FIELD(temp_r0, s32 *, 4);
    if (var_r4 <= temp_r0_2) {
        var_r4 = temp_r0_2;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r4;
}
