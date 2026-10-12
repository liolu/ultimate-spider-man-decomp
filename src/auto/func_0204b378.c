/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f358(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0202f5a0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202f64c(void *);                      /* extern */
s32 func_0202f66c();                                /* extern */
M2C_UNK func_0204b0f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204b1a0(void *, M2C_UNK);             /* extern */
s32 func_0204e9a8();                                /* extern */
s32 func_0204f6f8(s32, M2C_UNK, s32);               /* extern */
s32 func_0205047c(s32, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bb658;
extern M2C_UNK data_0210818c;
extern M2C_UNK data_02108348;

void *func_0204b378(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;

    func_0202f5a0(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02108348;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_0202f64c(arg0);
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
    temp_r0 = func_02064fc8(0x18);
    var_r1_2 = temp_r0;
    if (var_r1_2 != 0) {
        var_r1_2 = func_0205047c(temp_r0, &data_0210818c, &data_020bb658, 1);
    }
    func_0202f358(arg0, var_r1_2, 1);
    if (arg3 != 0) {
        func_0204b1a0(arg0, arg2);
    } else {
        func_0204b0f4(arg0, arg2);
    }
    return arg0;
}
