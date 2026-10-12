#include "m2c.h"

s32 func_020821f4(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x3C);
    }
    return M2C_FIELD(arg0, s32 *, 0x40);
}
