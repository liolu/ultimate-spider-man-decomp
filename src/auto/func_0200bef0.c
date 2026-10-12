/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200bf2c();                                /* extern */
s32 func_0200bf34(s32);                             /* extern */

s32 func_0200bef0(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (func_0200bf2c() != 0) {
        var_r4 = arg0 ^ 0xC;
    }
    if (func_0200bf34(arg0) != 0) {
        var_r4 ^= 3;
    }
    return var_r4;
}
