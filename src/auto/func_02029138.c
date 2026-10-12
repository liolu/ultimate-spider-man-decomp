/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020292cc(void *, s32);                     /* extern */

s32 func_02029138(void *arg0, u32 arg1) {
    s32 temp_r4;
    u32 temp_r2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    temp_r2 = M2C_FIELD(temp_r0, s32 *, 4) - M2C_FIELD(temp_r0, s32 *, 8);
    if (temp_r2 > arg1) {
        return 0;
    }
    temp_r4 = arg1 - temp_r2;
    if (temp_r4 == func_020292cc(temp_r0, temp_r4)) {
        return 1;
    }
    return 0;
}
