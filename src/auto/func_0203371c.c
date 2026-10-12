/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001e58(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020335e8();                                /* extern */

s32 func_0203371c(M2C_UNK arg0, M2C_UNK arg1) {
    if ((func_020335e8() != 0) && (func_02001e58(arg0, arg1) == 0)) {
        return 1;
    }
    return 0;
}
