/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f9a4();      /* extern */
s32 func_02064fc8();                         /* extern */

void func_020324f8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    var_r0 = func_02064fc8(0x1C);
    if (var_r0 != 0) {
        var_r0 = func_0200f9a4(var_r0, arg0 + 0x4C, arg1, arg2);
    }
    M2C_FIELD(arg0, s32 *, 0x6F4) = var_r0;
}
