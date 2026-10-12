/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9b20(void *, s32);                 /* extern */
s32 func_0202eabc();                                /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

s32 func_0204b47c(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
        var_r1 = func_02064fc8(0x34);
        if (var_r1 != 0) {
            var_r1 = func_0202eabc();
        }
        func_01ff9b20(arg0, var_r1);
    }
    return M2C_FIELD(arg0, s32 *, 0xA4);
}
