/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064e64(s32, s32, s32);               /* extern */
M2C_UNK func_02094ea0(s32, s32);                    /* extern */

void func_02030cdc(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;
    s32 temp_r3;

    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x118) = arg2;
    temp_r2                                      = M2C_FIELD(arg0, s32 *, 0x114);
    func_02094ea0(M2C_FIELD(arg0, s32 *, 0x110) + (temp_r2 * arg1 * 2), temp_r2 * 2);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x114);
    func_02064e64(M2C_FIELD(arg0, s32 *, 0x110) + (temp_r3 * arg1 * 2), arg2, temp_r3 * 2);
}
