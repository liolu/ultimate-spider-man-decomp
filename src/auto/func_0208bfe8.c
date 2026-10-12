/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fc8(M2C_UNK);                         /* extern */
s32 func_0208be70(s32, M2C_UNK);                    /* extern */
extern s32 data_02150c68;

void func_0208bfe8(M2C_UNK arg0) {
    s32 var_r0;

    var_r0 = func_02064fc8(0x15C);
    if (var_r0 != 0) {
        var_r0 = func_0208be70(var_r0, arg0);
    }
    data_02150c68 = var_r0;
}
