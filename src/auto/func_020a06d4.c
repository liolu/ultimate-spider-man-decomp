/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a07f0();                                /* extern */

s32 func_020a06d4(s32 arg0) {
    s32 var_r0;

    switch (arg0) {                                 /* irregular */
    case 1:
        var_r0 = 1;
        break;
    case 3:
        var_r0 = 2;
        break;
    case 2:
        var_r0 = 3;
        break;
    default:
        var_r0 = 0;
        break;
    }
    if (var_r0 == 0) {
        return 0xFFFF;
    }
    return func_020a07f0();
}
