#include "m2c.h"

void func_02087b5c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, volatile s32 *, 0)   = arg1;
    M2C_FIELD(arg0, volatile s32 *, 4)   = arg2;
    M2C_FIELD(arg0, volatile s32 *, 8)   = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = arg4;
}
