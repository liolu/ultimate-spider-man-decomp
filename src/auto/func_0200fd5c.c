/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02012750();                                /* extern */

s32 func_0200fd5c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x180) == 0xC) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return func_02012750();
}
