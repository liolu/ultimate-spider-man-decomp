/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f6dc(void *, s32);                 /* extern */
void *func_02064fbc(M2C_UNK);                       /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_021164bc;
extern M2C_UNK data_021164ec;

void *func_0204f6f8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0)                             = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0)                             = &data_021164bc;
    M2C_FIELD(arg0, s32 *, 0x1C)                               = arg2;
    M2C_FIELD(arg0, void **, 0x18)                             = func_02064fbc(0xF0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), M2C_UNK **, 0xC) = &data_021164ec;
    M2C_FIELD(arg0, s32 *, 0xC)                                = -1;
    if (arg1 != 0) {
        func_0204f6dc(arg0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x91;
    return arg0;
}
