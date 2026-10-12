/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200692c();                                /* extern */

s32 func_0200153c(void *arg0, s32 arg1) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x1B8) - 6) <= 1U) {
        return 0;
    }
    return func_0200692c(arg0, arg1);
}
