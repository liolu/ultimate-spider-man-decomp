#include "m2c.h"

s32 func_02031cec(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6F4) != 0) {
        return 1;
    }
    return 0;
}
