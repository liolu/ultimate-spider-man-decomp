/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020498b0();                            /* extern */
M2C_UNK func_02049aa4();                            /* extern */

void func_02049b4c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x748) != 2) {
        func_020498b0(arg0);
        return;
    }
    func_02049aa4(arg0);
}
