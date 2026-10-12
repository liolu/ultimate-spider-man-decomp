#include "m2c.h"

s32 func_0200d048(void *arg0) {
    s32 var_r2;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x20);
    var_r2 = 0;
    switch (temp_r1) {
    default:
        break;
    case 0:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x2C);
        break;
    case 1:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x30);
        break;
    case 2:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x34);
        break;
    case 3:
        var_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x38);
        break;
    }
    return var_r2;
}
