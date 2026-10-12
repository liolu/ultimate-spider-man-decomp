#include "m2c.h"

extern u16 data_02151fb0;

s32 func_02097274(void) {
    if (data_02151fb0 != 0) {
        return 0;
    }
    return 3;
}
