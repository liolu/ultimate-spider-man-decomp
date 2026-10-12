/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020586f8();                            /* extern */

void func_02022ed8(void *arg0) {
    s32 var_r2;

    var_r2 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0x1B8) == 0x23) && (M2C_FIELD(arg0, s32 *, 0x180) == 0x53)) {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return;
    }
    func_020586f8(arg0);
}
