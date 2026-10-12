/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033f28();                            /* extern */

void func_02042cf0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x450) == arg1) {
        return;
    }
    func_02033f28(arg0);
}
