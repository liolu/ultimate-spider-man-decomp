#include "m2c.h"

s32 func_02030a4c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x100) == 0) {
        return 1;
    }
    return 0;
}
