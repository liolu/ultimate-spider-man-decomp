/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02082090(M2C_UNK);                         /* extern */
s32 func_020820a4(M2C_UNK);                         /* extern */
s32 *func_02082640(M2C_UNK, M2C_UNK);               /* extern */

s32 func_020820b8(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 1;
    if (((*func_02082640(arg0, 0) == 3) || (*func_02082640(arg0, 1) == 3)) && (func_020820a4(arg0) == 1)) {
        var_r4 = 0;
    } else if (((*func_02082640(arg0, 0) == 6) || (*func_02082640(arg0, 1) == 6)) && (func_02082090(arg0) == 1)) {
        var_r4 = 0;
    }
    return var_r4;
}
