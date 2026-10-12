/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003d54(void *, s32);                     /* extern */
s32 func_02007d9c(void *, s32);                     /* extern */

s32 func_02007d1c(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_02007d9c(arg0, M2C_FIELD(arg0, s32 *, 0x180));
    temp_r0 = func_02007d9c(arg0, arg1);
    if (temp_r4 != temp_r0) {
        if (M2C_FIELD(arg0, s32 *, 0x180) == 0x47) {
            return 0x1AE;
        }
        if (arg1 == 0x47) {
            return 0x1AD;
        }
        if (temp_r0 != 0) {
            var_r0 = 0xA;
        } else {
            var_r0 = 0xB;
        }
        return var_r0;
    }
    return func_02003d54(arg0, arg1);
}
