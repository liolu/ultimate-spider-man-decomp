/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02022f98(void *arg0) {
    s32 var_r2;

    var_r2 = 0x19A;
    if (M2C_FIELD(arg0, u8 *, 0x776) != 0) {
        var_r2 = 0x1A1;
    } else if (M2C_FIELD(arg0, u8 *, 0x777) != 0) {
        var_r2 = 0x1A5;
    }
    return var_r2;
}
