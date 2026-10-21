/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c604(s32);                         /* extern */
M2C_UNK func_0209ab00(s32);                         /* extern */
extern M2C_UNK data_020f9114;

void *func_0202880c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f9114;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x30);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_0209ab00(M2C_FIELD(arg0, s32 *, 0x2C));
    func_0207c604(M2C_FIELD(arg0, s32 *, 0x78));
    func_0207c604(M2C_FIELD(arg0, s32 *, 0x74));
    return arg0;
}
