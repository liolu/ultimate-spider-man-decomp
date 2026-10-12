/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206f304(M2C_UNK);                         /* extern */

s32 func_0206f2c8(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 1;
    do {
        var_r4 = func_0206f304(arg0) + (var_r4 * 2);
    } while (func_0206f304(arg0) != 0);
    return var_r4;
}
