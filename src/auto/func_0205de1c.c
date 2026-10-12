/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020012d0(s32);                             /* extern */
M2C_UNK func_02001c78(void *, s32);                 /* extern */
M2C_UNK func_020097a0();                            /* extern */

void func_0205de1c(void *arg0) {
    func_020097a0();
    if (M2C_FIELD(arg0, s32 *, 0x1B8) != 0x20) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x700) != 2) {
        return;
    }
    func_02001c78(arg0, func_020012d0(M2C_FIELD(arg0, s32 *, 0x708) + 0x20) * 0xA);
}
