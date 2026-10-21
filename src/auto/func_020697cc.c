/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069550(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02069578(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211ac38;
extern s32 data_0213b6e0;
extern M2C_UNK data_0213d440;

void *func_020697cc(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ac38;
    func_02069550(arg0, 0x27, 2, M2C_FIELD(arg0, s32 *, 8));
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_02069578(arg0);
    M2C_FIELD(&data_0213d440, s32 *, 0x144) = (s32) (data_0213b6e0 + 0x3C);
    M2C_FIELD(arg0, M2C_UNK **, 0)          = &data_020efa10;
    return arg0;
}
