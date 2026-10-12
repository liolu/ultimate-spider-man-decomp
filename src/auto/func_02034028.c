#include "m2c.h"

s32 func_02034028(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1CC) != 0) {
        return 1;
    }
    return 0;
}
