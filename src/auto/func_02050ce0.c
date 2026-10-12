/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020335e8();                                /* extern */
s32 func_0203371c(M2C_UNK, s32);                    /* extern */

s32 func_02050ce0(M2C_UNK arg0, s32 arg1) {
    if ((arg1 != 0x3D) && (arg1 != 0x3F) && (func_020335e8() != 0) && (func_0203371c(arg0, arg1) != 0)) {
        return 1;
    }
    return 0;
}
