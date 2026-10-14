/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204ab40();                            /* extern */
extern M2C_UNK data_021017e4;

void *func_0202e8a0(void *arg0, s32 arg1) {
    func_0204ab40();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021017e4;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    return arg0;
}
