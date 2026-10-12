/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffbf4c(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_01ffc03c(s32, s32);                    /* extern */
M2C_UNK func_01ffc0d4(s32, void *, M2C_UNK);        /* extern */
void *func_0202718c(s32);                           /* extern */

void func_02036a9c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(func_0202718c(arg0 + 0x190), void **, 8);
    if (M2C_FIELD(temp_r4, s32 *, 0) == 0x800) {
        func_01ffc03c(arg0, M2C_FIELD(temp_r4, s32 *, 4));
        func_01ffbf4c(arg0, M2C_FIELD(temp_r4, s32 *, 8), 0);
        return;
    }
    func_01ffc0d4(arg0, temp_r4, arg2);
}
