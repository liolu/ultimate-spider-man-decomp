/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_020b52e4;

s32 func_0202c30c(s32 arg0) {
    s32 var_r3;
    u8 *var_r2;

    var_r2 = &data_020b52e4;
    var_r3 = 0;
loop_1:
    if (arg0 <= (s32) *var_r2) {
        return var_r3;
    }
    var_r3 += 1;
    var_r2 += 1;
    if (var_r3 >= 6) {
        return 0x7F;
    }
    goto loop_1;
}
