/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffbcb8(void *);                          /* extern */
M2C_UNK func_0203c400();                            /* extern */

void func_02044a88(void *arg0) {
    func_0203c400();
    if (M2C_FIELD(arg0, s32 *, 0x420) == 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1A8) = func_01ffbcb8(arg0);
}
