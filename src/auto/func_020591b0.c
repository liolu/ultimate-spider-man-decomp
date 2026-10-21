/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204651c(void *, s32);                 /* extern */
M2C_UNK func_02046b78(void *, void *);              /* extern */

void func_020591b0(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02046b78(arg0 + 0x1C, arg0 + 0xC);
        func_0204651c(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 4));
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x4C);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x10)(temp_r0);
}
