/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020949ec();                                /* extern */
s32 func_0209b3fc();                                /* extern */
M2C_UNK func_0209b454();                            /* extern */
s32 func_0209b524(s32);                             /* extern */
M2C_UNK func_0209b6e8(M2C_UNK);                     /* extern */
s32 func_0209b98c(M2C_UNK);                         /* extern */

s32 func_0209b8f0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_020949ec() != 0) {
        return 0;
    }
    temp_r0_3 = func_0209b3fc();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_0209b524(temp_r0_4) > 0) {
        do {

        } while (func_0209b98c(0) != 0);
        temp_r0_2 = func_0209b3fc();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0209b6e8(1);
block_12:
    func_0209b454();
    do {
        func_0209b98c(1);
        temp_r0 = func_0209b3fc();
    } while (temp_r0 == 0);
    return temp_r0;
}
