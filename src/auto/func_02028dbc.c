/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020efa10;
extern M2C_UNK data_020fcd1c;

void func_02028dbc(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fcd1c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
}
