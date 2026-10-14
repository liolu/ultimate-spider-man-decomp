#include "m2c.h"

extern M2C_UNK data_0213d440;

void func_02036338(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x218) = (s32) * ((M2C_UNK *) ((s8 *) &data_0213d440 + (arg1 * 4)));
}
