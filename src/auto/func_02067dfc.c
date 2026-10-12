/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028fb4(M2C_UNK *);                       /* extern */
s32 func_02058e14(s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020b528c;
extern M2C_UNK data_020b52a4;
extern M2C_UNK data_020b52bc;
extern M2C_UNK data_020b52d4;
extern M2C_UNK data_020d663c;
extern M2C_UNK data_0213b398;

void func_02067dfc(void *arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r4;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10);
    if (temp_r1 < -0x87) {
        var_r4 = func_02028fb4(&data_020b52bc);
    } else if (temp_r1 < -0x2D) {
        var_r4 = func_02028fb4(&data_020b528c);
    } else if (temp_r1 < 0x2D) {
        var_r4 = func_02028fb4(&data_020b52d4);
    } else if (temp_r1 < 0x87) {
        var_r4 = func_02028fb4(&data_020b52a4);
    } else {
        var_r4 = func_02028fb4(&data_020b52bc);
    }
    var_r0 = func_02064fc8(0x128);
    if (var_r0 != 0) {
        var_r0 = func_02058e14(var_r0, var_r4, &data_020d663c, &data_0213b398, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0;
}
