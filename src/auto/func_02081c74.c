#include "m2c.h"

extern M2C_UNK data_0213d5c8;

s32 func_02081c74(void *arg0) {
    return *((M2C_UNK *)((s8 *)&data_0213d5c8 + (M2C_FIELD(arg0, u16 *, 0x26E) * 0xC))) & 0xF0;
}
