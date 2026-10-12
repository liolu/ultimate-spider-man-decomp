/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02057b80(M2C_UNK);                         /* extern */
s32 func_02057bc8();                                /* extern */
s32 func_02058688(M2C_UNK);                         /* extern */
extern s32 data_021183d0;
extern s32 data_021183e4;

s32 func_0205ec98(M2C_UNK arg0) {
    s32 var_r0;

    if ((func_02057bc8() < (s32) data_021183e4) && (func_02057b80(arg0) < (s32) data_021183d0)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (func_02058688(arg0) == 0)) {
        return 1;
    }
    return 0;
}
