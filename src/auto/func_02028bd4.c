/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e8c();                /* extern */

void func_02028bd4(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 == NULL) {
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0xA4);
    if (temp_r0_2 == 0) {
        return;
    }
    func_02000e8c(temp_r0_2 + 4);
    func_02000e8c(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xA4) + 0x1C, arg2);
}
