/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204d5a4(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x4C);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x390);
    var_r3  = 0;
    if (temp_r1 > temp_r2) {
        var_r3 = 1;
    } else if (temp_r1 < temp_r2) {
        var_r3 = 2;
    }
    temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x50);
    temp_r0   = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0 > temp_r1_2) {
        var_r3 |= 8;
    } else if (temp_r0 < temp_r1_2) {
        var_r3 |= 4;
    }
    return var_r3;
}
