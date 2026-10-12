#include "m2c.h"

void func_020090f0(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x178) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(arg0, s32 *, 0x18C);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = arg2;
}
