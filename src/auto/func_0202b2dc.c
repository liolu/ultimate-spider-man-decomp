/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024c20(s32, M2C_UNK, u8);                /* extern */
M2C_UNK func_020553b0(void *, s32);                 /* extern */
M2C_UNK func_020553e8();                            /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_0202b2dc(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r1;
    u8 temp_r4;
    void *temp_r0_2;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 0x36);
    func_020553e8(arg0);
    temp_r0 = func_02064fc8(0x40);
    var_r1  = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_02024c20(temp_r0, arg1, temp_r4);
    }
    func_020553b0(arg0, var_r1);
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(M2C_FIELD(temp_r0_2, void **, 0), M2C_UNK(**)(void *, M2C_UNK), 0xC)(temp_r0_2, arg2);
}
