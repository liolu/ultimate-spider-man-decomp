/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028fb4(s32 **);                          /* extern */
s32 func_0205953c();                                /* extern */
M2C_UNK func_02059628(void *, s32, u8);             /* extern */

void func_02059810(void *arg0, void *arg1) {
    s32 temp_r1;
    u8 temp_r4;
    u8 temp_r4_2;

    if (M2C_FIELD(arg1, s32 *, 0) != 0xE) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
    case 0:
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x14);
        if (temp_r4 != 0) {
            return;
        }
        func_02059628(arg0, func_02028fb4(M2C_FIELD(arg1, s32 ***, 8)), temp_r4);
        return;
    case 1:
        temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x14);
        if (temp_r4_2 == 0) {
            return;
        }
        func_02059628(arg0, func_02028fb4(M2C_FIELD(arg1, s32 ***, 8)), temp_r4_2);
        return;
    case 2:
        **M2C_FIELD(arg1, s32 ***, 8) = func_0205953c(arg0);
        return;
    }
}
