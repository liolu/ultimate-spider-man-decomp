/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff9f78(void *);                          /* extern */
s32 func_0205682c();                                /* extern */
s32 func_02056878(s32, s32);                        /* extern */

s32 func_0204e114(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3B8);
    if ((temp_r4 != -1) && (func_02056878(func_0205682c(), temp_r4) != 0)) {
        return 1;
    }
    return func_01ff9f78(arg0);
}
