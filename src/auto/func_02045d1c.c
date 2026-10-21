/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_020339dc(void *);                      /* extern */
M2C_UNK func_0203cd20(void *);                      /* extern */
M2C_UNK func_02061c7c(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_02104844;

void *func_02045d1c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104844;
    func_0202f630();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x490);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x24C);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x248);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    func_020339dc(arg0 + 0x47C);
    func_02061c7c(arg0 + 0x250);
    func_0203cd20(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
