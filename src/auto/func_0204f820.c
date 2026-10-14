/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02082e38(M2C_UNK);                         /* extern */

void func_0204f820(void *arg0) {
    s32 temp_r2;
    void **temp_r0;

    temp_r2                     = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) ((s32) (temp_r2 + ((u32) (temp_r2 >> 7) >> 0x18)) >> 8);
    M2C_FIELD(arg0, s32 *, 0xC) = func_02082e38(0x10000);
    temp_r0                     = M2C_FIELD(arg0, void ***, 0x2C);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, void *, void *), 0x14)(temp_r0, arg0 + 0x14, arg0 + 8);
}
