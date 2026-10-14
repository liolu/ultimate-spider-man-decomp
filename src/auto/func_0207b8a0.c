/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f358(void *, s32, M2C_UNK);        /* extern */
s32 func_0202f66c();                                /* extern */
s32 func_0204e9a8();                                /* extern */
s32 func_0204f6f8(s32, M2C_UNK, s32);               /* extern */
s32 func_020593c8(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_020599f0(s32, M2C_UNK);                    /* extern */
s32 func_02064fc8(s32);                             /* extern */
M2C_UNK func_020776a4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02077708(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02077720();                                /* extern */
s32 func_02083c24(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_021486d8;

void func_0207b8a0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r4;
    s32 var_r4_2;

    var_r1 = func_02064fc8(4);
    if (var_r1 != 0) {
        var_r1 = func_0204e9a8();
    }
    func_0202f358(arg0, var_r1, 1);
    var_r4 = func_02064fc8(0x28);
    if (var_r4 != 0) {
        var_r4 = func_0204f6f8(var_r4, arg1, func_0202f66c());
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
    func_0202f358(arg0, M2C_FIELD(arg0, s32 *, 0x18), 1);
    if (arg4 != 0) {
        temp_r0  = func_02064fc8(0x18);
        var_r1_2 = temp_r0;
        if (var_r1_2 != 0) {
            var_r1_2 = func_020599f0(temp_r0, 1);
        }
        func_0202f358(arg0, var_r1_2, 1);
        temp_r0_2 = func_02064fc8(0x50);
        var_r1_3  = temp_r0_2;
        if (var_r1_3 != 0) {
            var_r1_3 = func_020593c8(temp_r0_2, &data_021486d8, 1, 1);
        }
        func_0202f358(arg0, var_r1_3, 1);
    }
    temp_r0_3 = func_02064fc8(0x594);
    var_r4_2  = temp_r0_3;
    if (var_r4_2 != 0) {
        var_r4_2 = func_02083c24(temp_r0_3, arg2, arg3);
    }
    if (var_r4_2 != 0) {
        var_r4_2 += 0x3C4;
    }
    func_02077708(func_02077720(), var_r4_2, 2, 1);
    func_020776a4(func_02077720(), 2);
}
