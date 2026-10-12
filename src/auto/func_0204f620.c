#include "m2c.h"

s32 func_0204f620(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x14);
    return (M2C_FIELD(temp_r1, s32 *, 4) * 0xC) + M2C_FIELD(temp_r1, s32 *, 0);
}
