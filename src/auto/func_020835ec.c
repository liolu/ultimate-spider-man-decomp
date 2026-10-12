#include "m2c.h"

void func_020835ec(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 > 0x20)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x20;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
