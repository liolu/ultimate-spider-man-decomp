/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02081f48(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK data_02150bb8;

void *func_020817d8(void *arg0) {
    s32 temp_r2;
    s32 var_r3;
    s32 var_r3_2;
    void *var_r0;
    void *var_r4;

    var_r4 = NULL;
    if (M2C_FIELD(arg0, u16 *, 0x26E) == 0) {
        var_r0 = func_02081f48(&data_02150bb8, 1);
    } else {
        var_r0 = func_02081f48(&data_02150bb8, 0);
    }
    var_r3  = M2C_FIELD(var_r0, s32 *, 0x4C) - M2C_FIELD(arg0, s32 *, 0x4C);
    temp_r2 = M2C_FIELD(var_r0, s32 *, 0x50) - M2C_FIELD(arg0, s32 *, 0x50);
    if (var_r3 < 0) {
        var_r3 = 0 - var_r3;
    }
    if (var_r3 < 0x1770) {
        if (temp_r2 < 0) {
            var_r3_2 = 0 - temp_r2;
        } else {
            var_r3_2 = temp_r2;
        }
        if ((var_r3_2 < 0x2710) && (temp_r2 > 0xBB8)) {
            var_r4 = var_r0;
        }
    }
    return var_r4;
}
