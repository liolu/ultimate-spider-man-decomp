/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02004db4();                                /* extern */
s32 func_02005080();                                /* extern */

s32 func_02010650(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x778) == 2) {
        if (func_02004db4() != 0) {
            var_r0 = 0x1E;
        } else {
            var_r0 = 0x1D;
        }
        return var_r0;
    }
    return func_02005080(arg0);
}
