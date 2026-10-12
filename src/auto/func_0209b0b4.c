/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b8a8();                            /* extern */
void *func_0209b8f0(M2C_UNK);                       /* extern */

void func_0209b0b4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    temp_r0 = func_0209b8f0(1);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = arg0;
    M2C_FIELD(temp_r0, s32 *, 8) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg4;
    func_0209b8a8();
}
