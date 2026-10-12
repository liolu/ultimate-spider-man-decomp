/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0204d774();                              /* extern */

s32 func_0204d738(void *arg0) {
    s32 var_r4;
    void *temp_r0;

    var_r4 = 0x7FFFFFFF;
    temp_r0 = func_0204d774();
    if (temp_r0 != NULL) {
        var_r4 = M2C_FIELD(temp_r0, s32 *, 0x4C) - M2C_FIELD(arg0, s32 *, 0x4C);
        if (var_r4 < 0) {
            var_r4 = 0 - var_r4;
        }
    }
    return var_r4;
}
