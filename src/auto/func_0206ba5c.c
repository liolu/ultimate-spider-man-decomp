#include "m2c.h"

extern M2C_UNK data_02147e60;

s32 func_0206ba5c(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 4) && (*((M2C_UNK *) ((s8 *) &data_02147e60 + (arg0 * 0x14C))) != 0)) {
        return 1;
    }
    return 0;
}
