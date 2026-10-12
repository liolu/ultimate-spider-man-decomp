/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b338(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_020a0084(void *);                      /* extern */
M2C_UNK func_020a009c(void *);                      /* extern */

s32 func_0209cf8c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_0209b338(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_020a009c(arg0 + 8);
    func_020a0084(arg0 + 0x14);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) | 2;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    return temp_r0;
}
