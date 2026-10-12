#include "m2c.h"

void func_02050f60(void *arg0) {
    if (M2C_FIELD(arg0, volatile s32 *, 0x700) == 1) {
        M2C_FIELD(arg0, volatile s32 *, 0x710) = 0xBB8;
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x710) = 0;
}
