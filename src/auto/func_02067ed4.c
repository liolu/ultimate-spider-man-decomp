/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fc8(M2C_UNK);                         /* extern */
s32 func_02068d30(s32, s32, s32);                   /* extern */

void func_02067ed4(void *arg0) {
    s32 var_r0;
    void *temp_r2;

    var_r0 = func_02064fc8(0x5C);
    if (var_r0 != 0) {
        temp_r2 = M2C_FIELD(arg0, void **, 4);
        var_r0  = func_02068d30(var_r0, M2C_FIELD(temp_r2, s32 *, 0x10), M2C_FIELD(temp_r2, s32 *, 0x1C));
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
}
