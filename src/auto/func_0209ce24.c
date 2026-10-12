/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b2c8(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0209b618();                                /* extern */
M2C_UNK func_0209b658(s32);                         /* extern */
M2C_UNK func_0209b6e8(M2C_UNK);                     /* extern */
M2C_UNK func_0209cdf0(void *);                      /* extern */
M2C_UNK func_020a0054(void *);                      /* extern */
M2C_UNK func_020a006c(void *);                      /* extern */

void func_0209ce24(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_0209b2c8(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020a006c(arg0 + 8);
        func_020a0054(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5 = func_0209b618();
        func_0209b6e8(1);
        func_0209b658(temp_r5);
    }
    func_0209cdf0(arg0);
}
