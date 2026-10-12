/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011804();                             /* extern */
s32 func_02011e9c();                             /* extern */
M2C_UNK func_0202f25c();                      /* extern */

void func_02012534(void *arg0) {
    if (func_02011804(arg0 + 0x1C) == 0) {
        return;
    }
    if (func_02011e9c(arg0 + 0x1C) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == M2C_FIELD(arg0, s32 *, 0x14)) {
        return;
    }
    func_0202f25c(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
}
