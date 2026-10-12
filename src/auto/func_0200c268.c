/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d4b0(void *);                          /* extern */
M2C_UNK func_0200d4c8(void *, s32);                 /* extern */

void func_0200c268(void *arg0, void *arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x24) {
        return;
    }
    temp_r0 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
    case 1:
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        return;
    case 0:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0) && (func_0200d4b0(arg0 + 4) == 7)) {
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
        }
        func_0200d4c8(arg0 + 4, M2C_FIELD(arg1, s32 *, 8));
        return;
    }
}
