/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffca08();                            /* extern */

void func_02061b44(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) == 2) {
        return;
    }
    func_01ffca08(arg0);
}
