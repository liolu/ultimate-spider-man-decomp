/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02084248(void *, s32, s32);            /* extern */
M2C_UNK func_0209c688(s32);                         /* extern */

void func_0208435c(void *arg0) {
    s32 var_r5;
    s32 var_r5_2;
    void *var_r4;

    var_r4 = arg0;
    var_r5 = 0;
    do {
        func_0209c688(M2C_FIELD(var_r4, s32 *, 0xC));
        var_r5 += 1;
        var_r4 += 0x1C;
    } while (var_r5 < 0xC);
    var_r5_2 = 0;
    do {
        func_02084248(arg0, var_r5_2, 0);
        var_r5_2 += 1;
    } while (var_r5_2 < 4);
}
