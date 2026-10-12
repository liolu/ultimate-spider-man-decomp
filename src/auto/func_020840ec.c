#include "m2c.h"

void func_020840ec(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, volatile s32 *, 0) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 4) = arg2;
}
