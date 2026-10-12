/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e68(u16 *, M2C_UNK);              /* extern */
s32 func_02097274();                                /* extern */
extern void *data_02151fb4;

s32 func_02097218(void) {
    s32 temp_r0;

    temp_r0 = func_02097274();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02094e68(M2C_FIELD(data_02151fb4, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_02151fb4, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
