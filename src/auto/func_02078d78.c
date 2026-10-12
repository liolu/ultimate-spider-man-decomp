#include "m2c.h"

void func_02078d78(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x50C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x510) = (s32) (0 - M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x514) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x518) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
