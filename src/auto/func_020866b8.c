/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020867e0();                            /* extern */

void func_020866b8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48) == M2C_FIELD(arg0, s32 *, 0x4C)) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x52) != 0) {
        return;
    }
    func_020867e0(arg0);
}
