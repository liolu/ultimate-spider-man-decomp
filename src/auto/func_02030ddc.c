#include "m2c.h"

s32 func_02030ddc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 4);
}
