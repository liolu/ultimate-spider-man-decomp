/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046cac();                                /* extern */
extern M2C_UNK data_020b8384;

s32 func_02046d38(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = func_02046cac();
    if (arg1 <= 3) {
        var_r0 = 0;
    }
    return (0xC * var_r0) + ((arg1 * 0x18) + (s32) &data_020b8384);
}
