#include "m2c.h"

extern s32 data_0213b6e0;

s32 func_0200fda0(void *arg0) {
    if ((s32) data_0213b6e0 >= (s32) M2C_FIELD(arg0, s32 *, 0x788)) {
        return 0xD;
    }
    return 0xC;
}
