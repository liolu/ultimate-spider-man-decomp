/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024c20(s32, s32, M2C_UNK);               /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
s32 func_02087c1c(s32, s32, M2C_UNK, u8, s32);      /* extern */

s32 func_0203418c(s32 arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = func_02064fc8(0xD0);
    if (var_r4 != 0) {
        temp_r0 = func_02064fc8(0x40);
        var_r1  = temp_r0;
        if (var_r1 != 0) {
            var_r1 = func_02024c20(temp_r0, M2C_FIELD(arg1, s32 *, 0), 0);
        }
        var_r4 = func_02087c1c(var_r4, var_r1, arg2, M2C_FIELD(arg1, u8 *, 8), M2C_FIELD(arg1, s32 *, 4));
    }
    return var_r4;
}
