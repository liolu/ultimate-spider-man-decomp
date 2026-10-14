/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
s32 func_0200d934(s32, s32, s32, u8);               /* extern */
M2C_UNK func_02013e64(s32, M2C_UNK);                /* extern */
M2C_UNK func_02013ecc(s32, s32, u8);                /* extern */
M2C_UNK func_02014870();                            /* extern */
s32 func_02015034(s32);                             /* extern */
M2C_UNK func_0202f944(s32);                         /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
M2C_UNK func_0207d8e4();                            /* extern */

void func_02014198(s32 arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r1;

    func_02013e64(arg0, 1);
    if (func_02015034(arg0 + 4) == 0) {
        func_0207d8e4();
    }
    func_0202f944(M2C_FIELD(arg1, s32 *, 8));
    func_02014870();
    func_01ffb558(2);
    temp_r0 = func_02064fc8(0x50);
    var_r1  = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_0200d934(temp_r0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, u8 *, 0xD));
    }
    func_02013ecc(arg0, var_r1, M2C_FIELD(arg1, u8 *, 0xC));
    func_01ffb540();
}
