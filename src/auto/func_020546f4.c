/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02053810(void *, s32);                     /* extern */
M2C_UNK func_02053fe4(void *, M2C_UNK);             /* extern */

void func_020546f4(void *arg0, M2C_UNK arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x200);
    if (temp_r2 == NULL) {
        return;
    }
    if (func_02053810(arg0, M2C_FIELD(temp_r2, s32 *, 0x28)) == 0) {
        return;
    }
    func_02053fe4(arg0, arg1);
}
