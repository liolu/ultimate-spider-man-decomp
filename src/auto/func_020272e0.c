#include "m2c.h"

u16 func_020272e0(void *arg0, void *arg1) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u16 *, 6);
    if ((temp_r2 == 0xFFFF) || ((s32) temp_r2 >= (s32) *M2C_FIELD(arg0, s32 **, 0x2C))) {
        return (u16) (*M2C_FIELD(arg0, s32 **, 0x2C) - 1);
    }
    return temp_r2;
}
