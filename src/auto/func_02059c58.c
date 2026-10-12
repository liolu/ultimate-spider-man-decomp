/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064e64(s32, s32);                    /* extern */
M2C_UNK func_02094f08();                            /* extern */

void func_02059c58(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;

    func_02094f08();
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC);
    func_02064e64((arg2 * temp_r2) + M2C_FIELD(arg0, s32 *, 4), (arg1 * temp_r2) + M2C_FIELD(arg0, s32 *, 0));
}
