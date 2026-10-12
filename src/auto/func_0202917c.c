/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02029480(s32, M2C_UNK, s32);               /* extern */

s32 func_0202917c(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 == func_02029480(M2C_FIELD(arg0, s32 *, 4), arg2, arg1)) {
        return 1;
    }
    return 0;
}
