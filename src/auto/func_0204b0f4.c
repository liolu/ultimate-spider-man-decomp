/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024c20(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0202f358(void *, s32, M2C_UNK);        /* extern */
s32 func_020556d8(s32, s32, M2C_UNK *);             /* extern */
M2C_UNK func_020592bc(s32, M2C_UNK *);              /* extern */
s32 func_0205947c(s32, M2C_UNK);                    /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bb5f8;
extern M2C_UNK data_0213aeb8;
extern M2C_UNK data_02143e90;

void func_0204b0f4(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = func_02064fc8(0x28);
    if (var_r4 != 0) {
        temp_r0 = func_02064fc8(0x40);
        var_r1 = temp_r0;
        if (var_r1 != 0) {
            var_r1 = func_02024c20(temp_r0, &data_0213aeb8, arg1);
        }
        var_r4 = func_020556d8(var_r4, var_r1, &data_020bb5f8);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
    var_r0 = func_02064fc8(0x50);
    if (var_r0 != 0) {
        var_r0 = func_0205947c(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
    func_020592bc(M2C_FIELD(arg0, s32 *, 0x20), &data_02143e90);
    func_0202f358(arg0, M2C_FIELD(arg0, s32 *, 0x18), 1);
    func_0202f358(arg0, M2C_FIELD(arg0, s32 *, 0x20), 1);
}
