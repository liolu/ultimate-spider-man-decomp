/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003d54();                                /* extern */

s32 func_0205deec(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x180) == 0x85) && (arg1 == 2)) {
        return 0x86;
    }
    return func_02003d54(arg0);
}
