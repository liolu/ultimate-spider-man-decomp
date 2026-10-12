/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02057b80(M2C_UNK);                         /* extern */
s32 func_02057bc8();                                /* extern */
extern s32 data_021183d8;
extern s32 data_021183e0;

s32 func_0205ec48(M2C_UNK arg0) {
    if ((func_02057bc8() < (s32) data_021183e0) && (func_02057b80(arg0) < (s32) data_021183d8)) {
        return 1;
    }
    return 0;
}
