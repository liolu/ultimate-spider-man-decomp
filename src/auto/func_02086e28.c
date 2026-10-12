/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_02086dd8(M2C_UNK);
M2C_UNK func_020870d0(M2C_UNK);
void func_02087114(M2C_UNK, M2C_UNK);

void func_02086e28(s32 arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    if (func_02086dd8(arg0) == 0) {
        return;
    }
    temp_r0 = (void *) func_020870d0(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    func_02087114(arg0, 0);
}
