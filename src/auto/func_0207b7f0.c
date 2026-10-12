/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204ebbc(s32);                             /* extern */

s32 func_0207b7f0(void *arg0) {
    if (func_0204ebbc(M2C_FIELD(arg0, s32 *, 0x18)) == 0) {
        return 1;
    }
    return 0;
}
