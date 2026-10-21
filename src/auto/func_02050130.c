/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059e64(s32);                         /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02116528;

void *func_02050130(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02116528;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x30);
    if ((temp_r4 != 0) && (temp_r4 != 0)) {
        func_02059e64(temp_r4);
        func_0209ab0c(temp_r4);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x2C);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
