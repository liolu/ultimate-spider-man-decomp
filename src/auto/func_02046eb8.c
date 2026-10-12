#include "m2c.h"

extern M2C_UNK data_020b4908;

s32 func_02046eb8(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) * 0x14) + (s32) &data_020b4908;
}
