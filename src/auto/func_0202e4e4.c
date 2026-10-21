/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8eac;
extern M2C_UNK data_021016e8;
extern M2C_UNK data_02101760;

void *func_0202e4e4(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101760;
    temp_r0                        = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021016e8;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8eac;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
