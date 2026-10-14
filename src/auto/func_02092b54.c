/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02092c30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02092cc0(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_02092b54(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u32 arg8) {
    func_02092cc0(arg0, 0x2A,
                  (arg8 >> 3) | (arg1 << 0x1A) | (arg2 << 0x1E) | (arg3 << 0x14) | (arg4 << 0x17) | (arg5 << 0x10) |
                      (arg6 << 0x12) | (arg7 << 0x1D));
    func_02092c30(arg0, 1);
}
