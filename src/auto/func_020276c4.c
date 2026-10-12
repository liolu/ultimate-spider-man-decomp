/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f4a0(void *);                      /* extern */
M2C_UNK func_0207c604(s32);                         /* extern */
M2C_UNK func_0209ab00(s32);                         /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020f90b4;

void *func_020276c4(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f90b4;
    func_0209ab0c(M2C_FIELD(arg0, void **, 0x34));
    temp_r4 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r4 != NULL) {
        func_0209ab00(M2C_FIELD(temp_r4, s32 *, 4));
        func_0209ab00(M2C_FIELD(temp_r4, s32 *, 0xC));
        func_0209ab00(M2C_FIELD(temp_r4, s32 *, 0x14));
        func_0209ab0c(temp_r4);
    }
    func_0207c604(M2C_FIELD(arg0, s32 *, 0x2C));
    func_0202f4a0(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
