/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02097218();                                /* extern */
s32 func_020972a0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020973f4(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02097e88(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02097218();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020973f4(1, arg0);
    var_r0 = func_020972a0(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
