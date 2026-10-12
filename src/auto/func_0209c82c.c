/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209c550(s32);                             /* extern */
extern M2C_UNK data_0215465c;

void *func_0209c82c(s32 arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    if (func_0209c550(1 << arg0) == 0) {
        return NULL;
    }
    temp_r0_2 = arg0 * 0x14;
    *((M2C_UNK *)((s8 *)&data_0215465c + temp_r0_2)) = arg0;
    temp_r0 = (M2C_UNK *)((s8 *)&data_0215465c + temp_r0_2);
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
    return temp_r0;
}
