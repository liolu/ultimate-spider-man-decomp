#include "m2c.h"

void func_020911d0(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg2, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8));
}
