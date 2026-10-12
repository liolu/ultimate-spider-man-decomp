#include "m2c.h"

s32 func_020855d4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE4) != M2C_FIELD(arg0, s32 *, 0xE0)) {
        return 1;
    }
    return 0;
}
