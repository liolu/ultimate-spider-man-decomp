/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020096d4();                                /* extern */

s32 func_0204a25c(s32 arg0, void *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(arg1, s32 *, 4) != 0x68) {
        var_r3 = func_020096d4(arg0, arg1);
    }
    return var_r3;
}
