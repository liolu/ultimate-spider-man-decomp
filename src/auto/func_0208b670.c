/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fc8(s32);                             /* extern */
s32 func_0208b700(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_02150c50;

void func_0208b670(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_02064fc8(0x79C);
    if (var_r0 != 0) {
        var_r0 = func_0208b700(var_r0, arg0, arg1);
    }
    data_02150c50 = var_r0;
}
