/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076fec();                            /* extern */
extern M2C_UNK data_0211bdec;

void *func_02076d64(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_02076fec();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211bdec;
    M2C_FIELD(arg0, s32 *, 0x18)   = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C)   = arg4;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    return arg0;
}
