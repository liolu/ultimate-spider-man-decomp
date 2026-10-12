/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b2c8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0209c688(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0209b2c8(1 << M2C_FIELD(arg0, s32 *, 0), 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
