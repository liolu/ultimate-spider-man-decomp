/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205a3b8(M2C_UNK, s32 *, s32, M2C_UNK, s32); /* extern */

void func_0208275c(void *arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_r1;

    func_0205a3b8(arg1, arg2, M2C_FIELD(arg0, s32 *, 0x4C), 1, (s32) M2C_FIELD(arg0, u16 *, 0x4A0));
    temp_r1 = *arg2;
    if (temp_r1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x244) = temp_r1;
        return;
    }
    *arg2 = M2C_FIELD(arg0, s32 *, 0x244);
}
