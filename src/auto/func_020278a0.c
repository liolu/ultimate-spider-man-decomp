#include "m2c.h"

void func_020278a0(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    u32 temp_r1;
    u32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x50);
    var_r1 = (s32) (temp_r1 + (temp_r1 >> 0x1F)) >> 1;
    if (var_r1 > 0x8000) {
        var_r1 = 0x8000;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r1;
    temp_r1_2 = M2C_FIELD(arg0, u32 *, 0x54);
    var_r1_2 = (s32) (temp_r1_2 + (temp_r1_2 >> 0x1F)) >> 1;
    if (var_r1_2 > 0x6000) {
        var_r1_2 = 0x6000;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r1_2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, u32 *, 0x50) - M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, u32 *, 0x54) - M2C_FIELD(arg0, s32 *, 0x18));
}
