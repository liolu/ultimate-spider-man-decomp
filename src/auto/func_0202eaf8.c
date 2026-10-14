/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201268c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0202f358(M2C_UNK **, s32, M2C_UNK);    /* extern */
M2C_UNK func_0202f5a0(M2C_UNK **, M2C_UNK);         /* extern */
s32 func_0202f66c();                                /* extern */
s32 func_0204e9a8();                                /* extern */
s32 func_0204f6f8(s32, M2C_UNK, s32);               /* extern */
s32 func_020593c8(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_020599f0(s32, M2C_UNK);                    /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_021018e0;
extern M2C_UNK data_0213d9a4;

M2C_UNK **func_0202eaf8(M2C_UNK **arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_7;
    s32 var_r4;

    func_0202f5a0(arg0, 1);
    *arg0  = &data_021018e0;
    var_r1 = func_02064fc8(4);
    if (var_r1 != 0) {
        var_r1 = func_0204e9a8();
    }
    func_0202f358(arg0, var_r1, 1);
    var_r4 = func_02064fc8(0x28);
    if (var_r4 != 0) {
        var_r4 = func_0204f6f8(var_r4, arg1, func_0202f66c());
    }
    func_0202f358(arg0, var_r4, 1);
    temp_r0  = func_02064fc8(0x2DC);
    var_r1_2 = temp_r0;
    if (var_r1_2 != 0) {
        var_r1_2 = func_0201268c(temp_r0, 0);
    }
    func_0202f358(arg0, var_r1_2, 1);
    temp_r0_2 = func_02064fc8(0x18);
    var_r1_3  = temp_r0_2;
    if (var_r1_3 != 0) {
        var_r1_3 = func_020599f0(temp_r0_2, 0);
    }
    func_0202f358(arg0, var_r1_3, 1);
    temp_r0_3 = func_02064fc8(0x50);
    var_r1_4  = temp_r0_3;
    if (var_r1_4 != 0) {
        var_r1_4 = func_020593c8(temp_r0_3, &data_0213d9a4, 0, 1);
    }
    func_0202f358(arg0, var_r1_4, 1);
    temp_r0_4 = func_02064fc8(0x2DC);
    var_r1_5  = temp_r0_4;
    if (var_r1_5 != 0) {
        var_r1_5 = func_0201268c(temp_r0_4, 1);
    }
    func_0202f358(arg0, var_r1_5, 1);
    temp_r0_5 = func_02064fc8(0x18);
    var_r1_6  = temp_r0_5;
    if (var_r1_6 != 0) {
        var_r1_6 = func_020599f0(temp_r0_5, 1);
    }
    func_0202f358(arg0, var_r1_6, 1);
    temp_r0_6 = func_02064fc8(0x50);
    var_r1_7  = temp_r0_6;
    if (var_r1_7 != 0) {
        var_r1_7 = func_020593c8(temp_r0_6, &data_0213d9a4, 1, 1);
    }
    func_0202f358(arg0, var_r1_7, 1);
    return arg0;
}
