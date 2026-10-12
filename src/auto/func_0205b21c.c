#include "m2c.h"

extern s32 data_0213b6e0;

s32 func_0205b21c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6EC) <= (s32) data_0213b6e0) {
        return 1;
    }
    return 0;
}
