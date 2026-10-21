/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020efa10;
extern M2C_UNK data_020efeac;

void *func_0200c724(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efeac;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
