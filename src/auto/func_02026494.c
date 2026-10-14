/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024c20(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02054c48(void **, M2C_UNK);            /* extern */
M2C_UNK func_020556d8(void *, s32, s32);            /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8f98;

void *func_02026494(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u8 arg7) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8f98;
    temp_r0                        = func_02064fc8(0x40);
    var_r1                         = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_02024c20(temp_r0, arg1, 0);
    }
    func_020556d8(arg0 + 4, var_r1, arg5);
    temp_r0_2 = func_02064fc8(0x40);
    var_r1_2  = temp_r0_2;
    if (var_r1_2 != 0) {
        var_r1_2 = func_02024c20(temp_r0_2, arg2, 0);
    }
    func_020556d8(arg0 + 0x2C, var_r1_2, arg6);
    M2C_FIELD(arg0, s32 *, 0x54) = arg3;
    M2C_FIELD(arg0, s32 *, 0x58) = arg4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    func_02054c48(M2C_FIELD(arg0, void ***, 0x24), 2);
    func_02054c48(M2C_FIELD(arg0, void ***, 0x4C), 2);
    if (arg7 != 0) {
        temp_r0_3 = M2C_FIELD(arg0, void ***, 0x24);
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0xC)(temp_r0_3, 1);
    }
    return arg0;
}
