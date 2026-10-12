/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02096450(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02096db4();                            /* extern */
s32 func_02097170(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02097274();                                /* extern */
extern s16 data_02151fb0;
extern s32 data_02151fb4;

s32 func_0209740c(void) {
    s32 temp_r0;

    if (func_02097274() != 0) {
        return 3;
    }
    temp_r0 = func_02097170(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02096db4();
    func_02096450(0xA, 0);
    data_02151fb4 = 0;
    data_02151fb0 = 0;
    return 0;
}
