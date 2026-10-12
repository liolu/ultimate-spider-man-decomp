/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202563c(s32, s32, s32, s32, s32, s32);    /* extern */
M2C_UNK func_0202f358(s32, s32, M2C_UNK);           /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_020257fc(s32 arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = func_02064fc8(0x138);
    var_r1 = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_0202563c(temp_r0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 0xC), 1);
    }
    func_0202f358(arg0 + 0x18, var_r1, 1);
}
