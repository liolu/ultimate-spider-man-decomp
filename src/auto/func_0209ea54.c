/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d1b8();                            /* extern */

void func_0209ea54(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x11C);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (temp_r1 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x11C) != 0) {
        return;
    }
    func_0209d1b8(arg0);
}
