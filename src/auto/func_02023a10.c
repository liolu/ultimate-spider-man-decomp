/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020232a8();                            /* extern */
M2C_UNK func_020235dc();                            /* extern */
M2C_UNK func_02023828();                            /* extern */

void func_02023a10(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x748);
    if (temp_r1 == 1) {
        func_020235dc(arg0);
        return;
    }
    if (temp_r1 == 2) {
        func_02023828(arg0);
        return;
    }
    func_020232a8(arg0);
}
