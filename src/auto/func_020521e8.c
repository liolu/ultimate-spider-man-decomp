/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02026154(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0202f358(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_020521e8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = func_02064fc8(0x30);
    var_r1  = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_02026154(temp_r0, 0);
    }
    func_0202f358(arg0, var_r1, 1);
}
