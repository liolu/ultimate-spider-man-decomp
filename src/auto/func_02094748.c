/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_02151bd8;

s32 func_02094748(void) {
    s32 var_r0;

    var_r0 = 0;
loop_1:
    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_02151bd8 + (var_r0 * 4))), s32 *, 0x14) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
