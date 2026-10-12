/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208472c(M2C_UNK, s32);                    /* extern */
M2C_UNK func_02084748(M2C_UNK, s32);                /* extern */

void func_02084824(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        if (func_0208472c(arg0, var_r4) != 0) {
            func_02084748(arg0, var_r4);
        }
        var_r4 += 1;
    } while (var_r4 < 4);
}
