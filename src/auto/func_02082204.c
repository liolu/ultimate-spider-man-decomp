/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208253c();                                /* extern */
s32 *func_02082640(M2C_UNK, M2C_UNK);               /* extern */

s32 func_02082204(M2C_UNK arg0) {
    s32 var_r0;
    s32 var_r4;

    var_r4 = 0;
    if (func_0208253c() == 1) {
        var_r0 = *func_02082640(arg0, 0);
    } else {
        var_r0 = *func_02082640(arg0, 1);
    }
    if ((var_r0 == 2) || (var_r0 == 4)) {
        var_r4 = 1;
    }
    return var_r4;
}
