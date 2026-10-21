/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bf9c(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_0210260c;

void *func_02033390(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210260c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x6F4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0205bf9c(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
