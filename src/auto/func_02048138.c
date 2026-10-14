/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020f78d8;
extern M2C_UNK data_02104cb4;

void func_02048138(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f78d8;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104cb4;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) (arg1 + 4);
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
}
