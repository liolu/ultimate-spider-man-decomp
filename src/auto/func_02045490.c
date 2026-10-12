/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0202718c(void *, M2C_UNK);               /* extern */
M2C_UNK func_02036b68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0203a2f4(void *);                      /* extern */

void func_02045490(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xBC);
    if (M2C_FIELD(temp_r2, u8 *, 0x97) != 0) {
        temp_r4 = M2C_FIELD(temp_r2, s32 *, 0x9C);
        if (temp_r4 != M2C_FIELD(func_0202718c(arg0 + 0x190, 0x14), s32 *, 4)) {
            func_02036b68(arg0, 0x14, 0, 0);
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x420);
    if (temp_r0 == 7) {
        return;
    }
    if (temp_r0 == 8) {
        return;
    }
    func_0203a2f4(arg0);
}
