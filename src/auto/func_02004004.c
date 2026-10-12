#include "m2c.h"

extern s32 data_0213b6e0;

s32 func_02004004(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1AC) <= (s32) data_0213b6e0) {
        return 1;
    }
    return 0;
}
