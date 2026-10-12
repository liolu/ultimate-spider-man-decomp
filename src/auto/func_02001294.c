/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208e02c();                                /* extern */
s32 func_0208e174();                                /* extern */

s32 func_02001294(s32 *arg0) {
    s32 temp_r4;
    s32 var_r0;

    if (func_0208e02c() != 0) {
        temp_r4 = *arg0;
        if (temp_r4 == func_0208e174()) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
