/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0209d754(s32);                           /* extern */
s32 func_0209ec3c(M2C_UNK, void *, u8, u8, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_0209f3b0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_0209d754(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_0209ec3c(arg0, temp_r0, M2C_FIELD(temp_r0, u8 *, 6), M2C_FIELD(temp_r0, u8 *, 5), arg1, arg2, 0, 0, 0, 0);
}
