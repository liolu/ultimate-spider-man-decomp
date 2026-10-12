/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020095fc(M2C_UNK, void *);                 /* extern */
s32 func_02058688();                                /* extern */

s32 func_0204a044(M2C_UNK arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    if (func_02058688() != 0) {
        temp_r0 = M2C_FIELD(arg1, s32 *, 4);
        if ((temp_r0 != 9) && (temp_r0 != 0xA)) {
            var_r4 = func_020095fc(arg0, arg1);
        }
    }
    return var_r4;
}
