/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200cd68();                                /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_0200c330(void *arg0) {
    s32 var_r0;

    var_r0 = func_02064fc8(0xB0);
    if (var_r0 != 0) {
        var_r0 = func_0200cd68();
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
}
