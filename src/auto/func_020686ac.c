/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02082e38(s32, s32);                        /* extern */

s32 func_020686ac(void *arg0) {
    s32 var_r0;

    var_r0 = func_02082e38(M2C_FIELD(arg0, s32 *, 4) * 0x64, M2C_FIELD(arg0, s32 *, 0xC));
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    if (var_r0 > 0x64) {
        var_r0 = 0x64;
    }
    return var_r0;
}
