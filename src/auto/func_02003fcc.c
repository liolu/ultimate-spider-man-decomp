#include "m2c.h"

extern s32 data_0213b6e0;

s32 func_02003fcc(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) <= (s32) data_0213b6e0) {
        return 1;
    }
    return 0;
}
