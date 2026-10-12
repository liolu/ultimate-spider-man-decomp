/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff886c();                                /* extern */

s32 func_02007be8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D8) != 0) {
        return 0;
    }
    return func_01ff886c(arg0);
}
