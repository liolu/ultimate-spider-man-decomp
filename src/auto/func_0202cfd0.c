/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202a3a8();                             /* extern */

s32 func_0202cfd0(void *arg0, s32 arg1) {
    s32 var_r0;
    void *temp_r2;

    var_r0 = arg1;
loop_1:
    if (var_r0 > 0) {
        var_r0 -= 1;
    } else {
        var_r0 = func_0202a3a8(arg0 + 0x28) - 1;
    }
    if ((M2C_FIELD(arg0, u8 *, 0xE9) == 0) && (var_r0 > arg1)) {
        return arg1;
    }
    temp_r2 = M2C_FIELD((arg0 + (var_r0 * 4)), void **, 0x48);
    if ((M2C_FIELD(temp_r2, u8 *, 4) != 0) && (M2C_FIELD(temp_r2, u8 *, 5) == 0)) {
        return var_r0;
    }
    if (var_r0 == arg1) {
        return var_r0;
    }
    goto loop_1;
}
