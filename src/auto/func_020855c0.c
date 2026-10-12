#include "m2c.h"

s32 func_020855c0(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) < 0x1F) {
        return 1;
    }
    return 0;
}
