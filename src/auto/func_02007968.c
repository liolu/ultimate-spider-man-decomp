#include "m2c.h"

extern M2C_UNK data_02143e44;

s32 func_02007968(void) {
    if (M2C_FIELD(&data_02143e44, s32 *, 4) == 0x15) {
        return 1;
    }
    return 0;
}
