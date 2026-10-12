/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffbf4c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_01ffc03c(M2C_UNK, s32);                /* extern */
M2C_UNK func_01ffc0d4(M2C_UNK, void *);             /* extern */

void func_020369e8(M2C_UNK arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg1, void **, 8);
    if (M2C_FIELD(temp_r4, s32 *, 0) == 0x800) {
        func_01ffc03c(arg0, M2C_FIELD(temp_r4, s32 *, 4));
        func_01ffbf4c(arg0, M2C_FIELD(temp_r4, s32 *, 8), 0);
        return;
    }
    func_01ffc0d4(arg0, temp_r4);
}
