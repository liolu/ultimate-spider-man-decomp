/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02054edc(void *, s32);                 /* extern */

void func_0200c8ec(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r6;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x20);
    var_r6  = M2C_FIELD(temp_r0, s32 *, 0x18) + arg1;
    if (var_r6 < 0) {
        var_r6 = 0;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x14), u8 *, 0x15) - 1;
    if (var_r6 > temp_r1) {
        var_r6 = temp_r1;
    }
    func_02054edc(temp_r0, var_r6);
    M2C_FIELD(arg0, s32 *, 0x2C) = var_r6;
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x78;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0x168;
}
