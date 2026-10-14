#include "m2c.h"

extern M2C_UNK data_0213d5c8;

s32 func_02082934(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0213d5c8 + (M2C_FIELD(arg0, u16 *, 0x4A0) * 0xC))) & 0xF0;
}
