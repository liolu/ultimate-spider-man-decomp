/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205d750(void *arg0, void *arg1) {
    s32 var_ip;

    var_ip = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0) <= (s32) M2C_FIELD(arg1, s32 *, 0)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 4) <= (s32) M2C_FIELD(arg1, s32 *, 4)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 8) >= (s32) M2C_FIELD(arg1, s32 *, 8)) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= (s32) M2C_FIELD(arg1, s32 *, 0xC))) {
        var_ip = 1;
    }
    return var_ip;
}
