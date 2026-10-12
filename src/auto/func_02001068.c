/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e54(void *, M2C_UNK);             /* extern */
u32 func_02000e5c(void *, M2C_UNK);                 /* extern */

u32 func_02001068(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    u32 temp_r0_3;
    void *temp_r1_2;
    void *temp_r2;

    temp_r0_3 = (u32) (M2C_FIELD(arg0, u8 *, 0x1D) << 0x1A) >> 0x1F;
    if (temp_r0_3 == 0) {
        return temp_r0_3;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 0x4C);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r0_2 < temp_r1) {
        temp_r2 = M2C_FIELD(arg0, void **, 0xA4);
        if ((s32) M2C_FIELD(temp_r2, s32 *, 0x10) <= -0xB3) {
            return -0xB3U;
        }
        func_02000e54(temp_r2 + 4, 0xC);
        return func_02000e5c(M2C_FIELD(arg0, void **, 0xA4) + 4, -0xB3);
    }
    if (temp_r0_2 <= temp_r1) {
        return (u32) temp_r0_2;
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0xA4);
    temp_r0 = M2C_FIELD(temp_r1_2, s32 *, 0x10);
    if (temp_r0 >= 0xB3) {
        return (u32) temp_r0;
    }
    func_02000e54(temp_r1_2 + 4, 0xC);
    return func_02000e5c(M2C_FIELD(arg0, void **, 0xA4) + 4, 0xB3);
}
