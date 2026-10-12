/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e68(void *, M2C_UNK);             /* extern */
s32 func_02097170(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
void *func_02097290();                              /* extern */

s32 func_020978b8(void) {
    s32 var_r5;
    u16 temp_r5;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;

    temp_r4 = func_02097290();
    if (func_02097170(2, 7, 8) != 0) {
        return 0;
    }
    func_02094e68(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    temp_r1 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r1, s32 *, 0xC) == 1) {
        return 0;
    }
    func_02094e68(temp_r1 + 0x184, 2);
    temp_r1_2 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r1_2, u16 *, 0x184) == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    func_02094e68(temp_r1_2 + 0x190, 2);
    temp_r1_3 = M2C_FIELD(temp_r4, void **, 4);
    temp_r5 = M2C_FIELD(temp_r1_3, u16 *, 0x190);
    if (var_r5 != 1) {
        return ((temp_r5 + 0x51) & ~0x1F) * 2;
    }
    func_02094e68(temp_r1_3 + 0xF4, 2);
    return ((((temp_r5 + 0xC) * M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0xF4)) + 0x29) & ~0x1F) * 2;
}
