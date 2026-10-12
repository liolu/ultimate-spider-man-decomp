/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02013b18(s32, u8);                     /* extern */

void func_02046b30(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 != 0) {
        func_02013b18(temp_r0, M2C_FIELD(arg0, u8 *, 0x28));
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0_2 == 0) {
        return;
    }
    func_02013b18(temp_r0_2, M2C_FIELD(arg0, u8 *, 0x28));
}
