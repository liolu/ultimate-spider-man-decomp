/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02018cfc(s32);                             /* extern */

s32 func_0200166c(void *arg0) {
    return func_02018cfc(M2C_FIELD(arg0, s32 *, 0x20)) + 4;
}
