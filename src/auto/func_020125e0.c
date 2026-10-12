/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011f5c(void *, M2C_UNK, s32, s32);   /* extern */

void func_020125e0(void *arg0, M2C_UNK arg1) {
    func_02011f5c(arg0 + 0x1C, arg1, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10) * 2);
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
