/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208ef28(void *, s32);                     /* extern */
M2C_UNK func_0208f0cc(void *, s32);                 /* extern */
M2C_UNK func_0208f62c();                            /* extern */
s32 func_0208f6cc(s32);                             /* extern */

s32 func_0208f5e4(void *arg0) {
    func_0208f0cc(arg0, func_0208ef28(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0208f6cc(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0208f62c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
