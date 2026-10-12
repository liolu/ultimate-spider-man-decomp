/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b2c8(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0209b618();                                /* extern */
M2C_UNK func_0209b658(s32);                         /* extern */
M2C_UNK func_0209b6e8(M2C_UNK);                     /* extern */

void func_0209ccd4(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_0209b2c8(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_0209b618();
    func_0209b6e8(1);
    func_0209b658(temp_r4);
}
