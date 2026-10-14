/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02031cec(M2C_UNK);

s32 func_0203254c(s32 arg0) {
    s32 var_r2;
    u32 temp_r1;

    var_r2  = 1;
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1B8) - 0x1D;
    switch (temp_r1) {
        default:
            break;
        case 0:
        case 1:
        case 2:
        case 4:
        case 5:
            var_r2 = 0;
            break;
    }
    if ((M2C_FIELD(arg0, u8 *, 0xA8) != 0) && (var_r2 != 0) && (func_02031cec(arg0) != 0)) {
        return 1;
    }
    return 0;
}
