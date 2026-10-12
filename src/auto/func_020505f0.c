/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200584c();                                /* extern */

s32 func_020505f0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x748) == 0) {
        return 0;
    }
    return func_0200584c(arg0, arg1);
}
