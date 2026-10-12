/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208732c(void *, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0211cbac;

void *func_02086e7c(void *arg0, M2C_UNK arg1, void *arg2) {
    func_0208732c(arg0, arg1, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8), M2C_FIELD(arg2, s32 *, 0xC));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211cbac;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    return arg0;
}
