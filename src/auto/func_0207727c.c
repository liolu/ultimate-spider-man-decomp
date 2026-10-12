#include "m2c.h"

void func_0207727c(void *arg0) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 **, 8);
    if (temp_r1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) *temp_r1;
    }
}
