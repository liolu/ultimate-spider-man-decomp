/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020012d0(s32);                             /* extern */
M2C_UNK func_02004024(void *, s32);                 /* extern */
s32 func_02057b80(void *);                          /* extern */
s32 func_02057bc8(void *);                          /* extern */

void func_02001a88(void *arg0) {
    s32 var_r4;

    var_r4 = func_020012d0(M2C_FIELD(arg0, s32 *, 0x178) + 4);
    if ((func_02057bc8(arg0) < 0xFA0) && (func_02057b80(arg0) < 0x7D0) && (var_r4 > 5)) {
        var_r4 = 5;
    }
    func_02004024(arg0, var_r4);
}
