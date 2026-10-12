/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
M2C_UNK func_0202f358(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0202f66c();                                /* extern */
s32 func_0204f6f8(s32, M2C_UNK, s32);               /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_0204eab0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r4;

    func_01ffb558(0);
    var_r4 = func_02064fc8(0x28);
    if (var_r4 != 0) {
        var_r4 = func_0204f6f8(var_r4, arg1, func_0202f66c());
    }
    func_0202f358(arg0, var_r4, 1);
    func_01ffb540();
}
