/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020535f8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, s32), 0x20)(arg0, M2C_FIELD(arg0, s32 *, 0x28));
}
