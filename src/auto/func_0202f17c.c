/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(s32);                             /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02102118;

void *func_0202f17c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102118;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 4)      = func_02064fbc(arg1 * 4);
    return arg0;
}
