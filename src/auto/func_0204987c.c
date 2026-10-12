/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02082e38(s32, s32);                        /* extern */

s32 func_0204987c(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 8);
    temp_r5 = M2C_FIELD(temp_r6, volatile s32 *, 8);
    temp_r4 = func_02082e38(arg2, temp_r5);
    return temp_r4 + func_02082e38(temp_r5, M2C_FIELD(temp_r6, volatile s32 *, 4));
}
