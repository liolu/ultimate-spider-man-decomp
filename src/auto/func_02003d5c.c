/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02018cfc();                               /* extern */
extern s32 data_0213b6e0;

s32 func_02003d5c(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x1A0);
    } else {
        var_r1 = *func_02018cfc();
    }
    if ((var_r1 > (s32) data_0213b6e0) ||
        (((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x178), u8 *, 0x14) << 0x1E) >> 0x1F) != 0) ||
        (M2C_FIELD(arg0, u8 *, 0x1F0) != 0)) {
        return 1;
    }
    return 0;
}
