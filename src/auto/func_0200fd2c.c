/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201272c();                                /* extern */

s32 func_0200fd2c(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x180) == 0xC) {
        return 1;
    }
    return func_0201272c(arg0, arg1);
}
