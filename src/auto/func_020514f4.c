/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004e44(void *, M2C_UNK);             /* extern */
M2C_UNK func_02058114();                            /* extern */

void func_020514f4(void *arg0, M2C_UNK arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x700);
    if ((temp_r2 != 0) && (temp_r2 != 1)) {
        func_02058114(arg0);
    }
    func_02004e44(arg0, arg1);
}
