/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02067a48();                            /* extern */
M2C_UNK func_02067fc0(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211aa60;
extern s32 data_0213b6e0;
extern M2C_UNK data_0213d440;

void *func_02068018(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211aa60;
    func_02067a48();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    func_02067fc0(arg0);
    M2C_FIELD(&data_0213d440, s32 *, 0x144) = (s32) (data_0213b6e0 + 0x3C);
    M2C_FIELD(arg0, M2C_UNK **, 0)          = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
