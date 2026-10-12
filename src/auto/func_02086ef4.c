/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02087108();                            /* extern */

void func_02086ef4(void *arg0) {
    func_02087108();
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
