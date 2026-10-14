/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02015400(s32, M2C_UNK);                    /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8aa4;

void *func_02021e50(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8aa4;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0xA;
    var_r0                         = func_02064fc8(0x10);
    if (var_r0 != 0) {
        var_r0 = func_02015400(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    var_r0_2                  = func_02064fc8(0x10);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02015400(var_r0_2, arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    return arg0;
}
