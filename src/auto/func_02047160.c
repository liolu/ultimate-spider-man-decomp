/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e4c();                    /* extern */
M2C_UNK func_02000e5c();                    /* extern */
M2C_UNK func_02000e8c();                 /* extern */

void func_02047160(void *arg0, void *arg1, void *arg2) {
    func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 4);
    if (M2C_FIELD(arg0, u8 *, 0x15E) != 0) {
        func_02000e4c(M2C_FIELD(arg0, s32 *, 0xA4) + 4, 0 - M2C_FIELD(arg1, s32 *, 8));
        func_02000e5c(M2C_FIELD(arg0, s32 *, 0xA4) + 4, 0 - M2C_FIELD(arg1, s32 *, 0));
    }
    func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, arg2);
    if (M2C_FIELD(arg0, u8 *, 0x15F) == 0) {
        return;
    }
    func_02000e4c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, 0 - M2C_FIELD(arg2, s32 *, 8));
    func_02000e5c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, 0 - M2C_FIELD(arg2, s32 *, 0));
}
