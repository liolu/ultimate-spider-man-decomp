/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0213b6e0;

s32 func_0205eef8(void *arg0) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r3;

    var_r3 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x9E0) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x9D0) <= (s32) data_0213b6e0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x700);
        var_r1 = 1;
        if ((temp_r0 != 0) && (temp_r0 != 3)) {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}
