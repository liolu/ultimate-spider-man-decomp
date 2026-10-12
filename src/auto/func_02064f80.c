/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064f80(s32 arg0) {
    s32 var_r0;
    u8 temp_r0;

    temp_r0 = arg0 + 0xF7;
    var_r0 = 0;
    if ((u32) temp_r0 > 0x17U) {
        return 0;
    }
    if ((1 << temp_r0) & 0x800003) {
        var_r0 = 1;
    }
    return var_r0;
}
