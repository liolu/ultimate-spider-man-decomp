/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201520c(void *);                      /* extern */
extern M2C_UNK data_0211aedc;

void *func_0206fafc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211aedc;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xBC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0201520c(arg0);
    return arg0;
}
