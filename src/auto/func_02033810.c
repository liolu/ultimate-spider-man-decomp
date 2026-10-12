/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200a400(s32);                             /* extern */

s32 func_02033810(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = 0;
    if (func_0200a400(M2C_FIELD(arg0, s32 *, 4) + (arg2 * 0x10)) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
