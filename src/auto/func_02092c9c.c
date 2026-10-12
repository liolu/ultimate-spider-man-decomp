#include "m2c.h"

void func_02092c9c(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    *M2C_FIELD(arg0, s8 **, 0) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = arg2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) = arg3;
}
