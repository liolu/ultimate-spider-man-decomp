/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070950(void *, s32);                 /* extern */
s32 func_02070f20(s32);                             /* extern */

void func_0207b214(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x540) != 0) {
        return;
    }
    func_02070950(arg0 + 0x1D0, func_02070f20(M2C_FIELD(arg0, s32 *, 0x478)));
}
