#include "m2c.h"

s32 func_02055a04(void *arg0, void *arg1) {
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x17C), s8 *, 0xF) == M2C_FIELD(M2C_FIELD(arg0, void **, 0x17C), s8 *, 0xF)) {
        return 1;
    }
    return 0;
}
