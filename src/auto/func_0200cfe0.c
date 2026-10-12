#include "m2c.h"

s32 func_0200cfe0(void *arg0) {
    s32 var_r2;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x20);
    var_r2 = -1;
    switch (temp_r1) {
    default:
        break;
    case 0:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x54);
        break;
    case 1:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x58);
        break;
    case 2:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x5C);
        break;
    case 3:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x60);
        break;
    }
    return var_r2;
}
