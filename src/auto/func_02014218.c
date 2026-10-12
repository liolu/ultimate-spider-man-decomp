/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
M2C_UNK func_02013e64(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02013ecc(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0202eaf8(s32, s32);                        /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
M2C_UNK func_0207dce0();                            /* extern */

void func_02014218(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;
    s32 var_r1;

    func_02013e64(arg0, 1);
    func_0207dce0();
    func_01ffb558(2);
    temp_r0 = func_02064fc8(0x18);
    var_r1 = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_0202eaf8(temp_r0, *arg1);
    }
    func_02013ecc(arg0, var_r1, 1);
    func_01ffb540();
}
