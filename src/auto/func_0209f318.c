#include "m2c.h"

void func_0209f318(void **arg0) {
    void *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x10C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x10C) | 4);
    }
}
