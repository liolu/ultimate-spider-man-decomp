/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0214604c;
extern s32 data_02146050;

s32 func_02050290(void *arg0) {
    s32 var_r0;
    s32 var_r1;
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x14);
    if (temp_r2 != 0) {
        if (data_02146050 != 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
    } else if (data_0214604c != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        return 0;
    }
    if (temp_r2 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x10) == data_02146050) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == data_0214604c) {
        return 1;
    }
    return 0;
}
