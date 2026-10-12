#include "m2c.h"

s32 func_0200d038(void *arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x18) + (arg1 * 4)), s32 *, 0xC);
}
