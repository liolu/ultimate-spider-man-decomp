/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff9f78(void *);                          /* extern */
s32 func_0205682c();                                /* extern */
s32 func_02056878(s32, s32);                        /* extern */

s32 func_02003bdc(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;

    temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0x1B8);
    var_r5  = 0;
    if (temp_r0 <= 0xE) {
        if (temp_r0 < 0xE) {
            if ((temp_r0 <= 6) && (temp_r0 >= 3)) {
                if ((temp_r0 != 3) && (temp_r0 != 4) && (temp_r0 != 6)) {

                } else {
                    goto block_9;
                }
            }
        } else {
            goto block_9;
        }
    } else if (temp_r0 == 0x12) {
    block_9:
        var_r5 = 1;
    }
    if (var_r5 == 0) {
        temp_r4 = M2C_FIELD(arg0, volatile s32 *, 0x184);
        if ((temp_r4 != -1) && (func_02056878(func_0205682c(), temp_r4) != 0)) {
            var_r5 = 1;
        }
    }
    if ((var_r5 != 0) || (func_01ff9f78(arg0) != 0)) {
        return 1;
    }
    return 0;
}
