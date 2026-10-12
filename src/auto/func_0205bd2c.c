/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006db8();                            /* extern */

void func_0205bd2c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1B8);
    if (temp_r1 == 0x1B) {
        return;
    }
    if (temp_r1 == 0x1C) {
        return;
    }
    func_02006db8(arg0);
}
