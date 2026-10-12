#include "m2c.h"

extern s32 data_020a77b0;

void func_02003b9c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1CC) = (s32) data_020a77b0;
}
