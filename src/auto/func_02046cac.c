#include "m2c.h"

s32 func_02046cac(void *arg0, s32 arg1) {
    if (arg1 <= 7) {
        return M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg1 <= 0x14) {
        return M2C_FIELD(arg0, s32 *, 0x2C);
    }
    return M2C_FIELD(arg0, s32 *, 0x30);
}
