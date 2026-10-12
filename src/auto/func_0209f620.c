#include "m2c.h"

void func_0209f620(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 < (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r2 + 1);
    }
}
