#include "m2c.h"

s32 func_0208388c(void *arg0, s32 arg1) {
    return (arg1 + 1) & (M2C_FIELD(arg0, s32 *, 0x10) - 1);
}
