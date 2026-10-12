/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02058b24();                                /* extern */

s32 func_020037f8(s32 arg0, void *arg1) {
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = M2C_FIELD(arg1, s32 *, 4);
    var_r3 = 0;
    if ((temp_r2 != 0x11) && (temp_r2 != 0x12)) {
        var_r3 = func_02058b24(arg0, arg1);
    }
    return var_r3;
}
