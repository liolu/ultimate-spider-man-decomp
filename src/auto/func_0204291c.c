/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630(void *);                      /* extern */
M2C_UNK func_0203cd20(void *);                      /* extern */
M2C_UNK func_0203d928(void *);                      /* extern */
extern M2C_UNK data_0210457c;

void *func_0204291c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210457c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x254);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x254) = NULL;
    temp_r0_2                        = M2C_FIELD(arg0, void ***, 0x244);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_0203d928(arg0);
    func_0202f630(arg0);
    func_0203cd20(arg0);
    return arg0;
}
