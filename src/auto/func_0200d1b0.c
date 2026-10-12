/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d0a0();                            /* extern */
M2C_UNK func_02027324(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_0200d1b0(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r1) {
    case 0:
        break;
    default:
        break;
    case 1:
        func_02027324(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x44), 0, 0);
        break;
    case 2:
        func_02027324(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x48), 0, 0);
        break;
    case 3:
        func_0200d0a0(arg0);
        func_02027324(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x4C), 0, 0);
        break;
    }
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
}
