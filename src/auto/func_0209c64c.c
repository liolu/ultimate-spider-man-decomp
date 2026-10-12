/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b1f8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0209c64c(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_0209b1f8(1 << M2C_FIELD(arg0, s32 *, 0), arg1, 0);
}
