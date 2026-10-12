#include "m2c.h"

s32 func_0207ee54(void *arg0, void *arg1) {
    s32 var_ip;

    var_ip = 1;
    if (M2C_FIELD(arg1, s32 *, 4) != M2C_FIELD(arg0, s32 *, 0x618)) {
        var_ip = 0;
    } else if (M2C_FIELD(arg1, s32 *, 0x10) != M2C_FIELD(arg0, s32 *, 0x624)) {
        var_ip = 0;
    }
    return var_ip;
}
