#include "m2c.h"

void func_02082158(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}
