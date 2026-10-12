/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc(void *, void *);              /* extern */
s32 func_01ffbcb8();                                /* extern */
M2C_UNK func_02000e8c(s32, void *);                 /* extern */
s32 func_02034460(void *);                          /* extern */
M2C_UNK func_02036a3c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02036a9c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02036b68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02038468(void *, M2C_UNK);             /* extern */

void func_02037500(void *arg0, void *arg1) {
    M2C_UNK var_r7;
    M2C_UNK var_r8;
    s32 temp_r0;
    s32 var_r6;

    M2C_FIELD(arg0, s32 *, 0x214) = (s32) (func_01ffbcb8() + 0x1E);
    if (func_02034460(arg0) != 0) {
        var_r7 = 0x20;
        var_r6 = 0x10;
    } else if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        var_r7 = 0x1F;
        var_r6 = 0xF;
    } else {
        var_r7 = 0x1C;
        var_r6 = 0xE;
    }
    temp_r0 = M2C_FIELD(arg1, s32 *, 0x10);
    if (temp_r0 == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) > 0) {
            var_r8 = 1;
        } else {
            var_r8 = 0;
        }
        func_02036a3c(arg0, var_r7, 0);
        func_02036a9c(arg0, var_r7, var_r8);
        func_02036b68(arg0, var_r7, 0, 0);
        func_02038468(arg0, var_r7);
    } else if (temp_r0 > 0) {
        func_02036a3c(arg0, var_r7, 0);
        func_02036a9c(arg0, var_r7, 0);
        func_02036b68(arg0, var_r7, 0, 0);
        func_02038468(arg0, var_r7);
    } else if (temp_r0 < 0) {
        func_02036a3c(arg0, var_r7, 0);
        func_02036a9c(arg0, var_r7, 1);
        func_02036b68(arg0, var_r7, 0, 0);
        func_02038468(arg0, var_r7);
    }
    func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 4, arg1 + 8);
    func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, arg1 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x194) = var_r6;
    func_01ff9acc(arg0, arg0 + 0x1B4);
}
