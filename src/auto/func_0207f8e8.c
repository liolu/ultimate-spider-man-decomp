/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052834();                            /* extern */
M2C_UNK func_0207f3f8();                            /* extern */

void func_0207f8e8(void *arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) == 3) {
        if (M2C_FIELD(arg1, s32 *, 4) != 1) {
            return;
        }
        temp_r1 = M2C_FIELD(arg0, s32 *, 0xE8);
        if (temp_r1 == 1) {
            return;
        }
        if (temp_r1 == 2) {
            return;
        }
        func_0207f3f8(arg0);
        return;
    }
    func_02052834(arg0);
}
