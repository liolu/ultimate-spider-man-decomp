#include "m2c.h"

extern s32 data_02151fb4;

void func_020973f4(s32 arg0, s32 arg1) {
    M2C_FIELD((data_02151fb4 + (arg0 * 4)), s32 *, 0x18) = arg1;
}
