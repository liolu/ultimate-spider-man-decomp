/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209be48(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0209bee4(s32, void *);                 /* extern */
void *func_0209c134(s32, s32, M2C_UNK);             /* extern */

void *func_0209db14(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_0209c134(*arg0, ((arg1 + 0x1F) & ~0x1F) + 0x20, 0x20);
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r0_2 = func_0209be48(((s8 *)arg0 + 4), 0);
    M2C_FIELD(temp_r0, s32 *, 8) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg4;
    func_0209bee4(temp_r0_2, temp_r0);
    return temp_r0 + 0x20;
}
