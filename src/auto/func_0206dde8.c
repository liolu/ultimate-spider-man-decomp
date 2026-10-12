#include "m2c.h"

extern M2C_UNK data_020d86e8;
extern M2C_UNK data_020d8768;

void func_0206dde8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = &data_020d8768;
    M2C_FIELD(arg0, s32 *, 0x4C) = 9;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &data_020d86e8;
    M2C_FIELD(arg0, s32 *, 0x50) = 5;
}
