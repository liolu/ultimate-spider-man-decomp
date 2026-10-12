#include "m2c.h"

s32 func_02014a30(void *arg0, s32 arg1) {
    return (arg1 + 1) & (M2C_FIELD(arg0, s32 *, 0x10) - 1);
}
