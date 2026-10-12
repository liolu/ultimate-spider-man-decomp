/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c284(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02116a24;
extern M2C_UNK data_0214876c;

s32 func_020511f0(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = -1;
    if (arg1 == 0x41) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x180);
        if (temp_r1 != 0x1AF) {
            var_r4 = 0x196;
            if (temp_r1 == 0x196) {
                var_r4 = 0x1AF;
            } else {
                func_0207c284(&data_0214876c, &data_02116a24, 0, 0, 0);
            }
        }
    } else if ((M2C_FIELD(arg0, s32 *, 0x180) == 0x1B0) && (arg1 != 0x1B0)) {
        var_r4 = 0x1B1;
    }
    return var_r4;
}
