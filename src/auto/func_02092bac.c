/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02092c30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02092cc0(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_02092bac(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_02092cc0(arg0, 0x29, arg6 | (arg1 | (arg2 * 0x10) | (arg3 << 6)) | (arg4 << 0x18) | (arg5 << 0x10));
    func_02092c30(arg0, 1);
}
