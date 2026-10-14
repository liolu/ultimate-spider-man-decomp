/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
M2C_UNK func_02013e64(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02013ecc(M2C_UNK, s32, u8);            /* extern */
s32 func_0204b378(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_02014138(M2C_UNK arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r1;

    func_02013e64(arg0, 1);
    func_01ffb558(2);
    temp_r0 = func_02064fc8(0x24);
    var_r1  = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_0204b378(temp_r0, M2C_FIELD(arg1, s32 *, 0), 1, 0);
    }
    func_02013ecc(arg0, var_r1, M2C_FIELD(arg1, u8 *, 4));
    func_01ffb540();
}
