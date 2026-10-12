#include "m2c.h"

s32 func_0208c01c(void *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 <= (s32) M2C_FIELD(arg0, s32 *, 8))) {
        return 1;
    }
    return 0;
}
