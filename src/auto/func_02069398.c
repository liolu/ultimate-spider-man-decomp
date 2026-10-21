/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_020555e0(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_0211abf8;

void *func_02069398(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211abf8;
    func_0202f630();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x4C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020555e0(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
