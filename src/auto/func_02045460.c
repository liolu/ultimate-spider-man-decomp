/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02036458();                                /* extern */

s32 func_02045460(s32 arg0, void *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(arg1, s32 *, 4) != 0xF) {
        var_r3 = func_02036458(arg0, arg1);
    }
    return var_r3;
}
