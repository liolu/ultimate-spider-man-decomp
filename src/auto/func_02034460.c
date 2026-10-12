#include "m2c.h"

s32 func_02034460(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u16 *, 0x3A) <= (s32) M2C_FIELD(arg0, u16 *, 0x1C2)) {
        return 1;
    }
    return 0;
}
