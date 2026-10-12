/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046794(void *, s32);                     /* extern */
M2C_UNK func_02046b78(void *, void *);              /* extern */

void func_0205924c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_02046b78(arg0 + 0x1C, arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = func_02046794(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 4));
}
