/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204eb08();                                /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern s32 data_02146048;

void func_0204eb80(void) {
    s32 var_r0;

    var_r0 = func_02064fc8(0x18);
    if (var_r0 != 0) {
        var_r0 = func_0204eb08();
    }
    data_02146048 = var_r0;
}
