#include "m2c.h"

s32 func_0208472c(s32 arg0, s32 arg1) {
    if (M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0x168) != 0) {
        return 1;
    }
    return 0;
}
