/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_02057b80(M2C_UNK);
M2C_UNK func_02057bc8(M2C_UNK);
M2C_UNK func_02058688(M2C_UNK);
M2C_UNK func_0205e580(M2C_UNK);
M2C_UNK func_0205e5c8(M2C_UNK);

extern s32 data_021183d0;
extern s32 data_021183e4;

s32 func_0205e5dc(s32 arg0) {
    s32 var_r5;

    if (M2C_FIELD(arg0, s32 *, 0x9D4) != 0) {
        return 0;
    }
    if ((func_02057bc8(arg0) < (s32) data_021183e4) && (func_02057b80(arg0) < (s32) data_021183d0)) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x9E0) == 0) && (func_0205e5c8(arg0) != 0) && (var_r5 != 0) && (func_02058688(arg0) != 0) && (func_0205e580(arg0) != 0)) {
        return 1;
    }
    return 0;
}
