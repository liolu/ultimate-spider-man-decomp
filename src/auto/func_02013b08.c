#include "m2c.h"

extern M2C_UNK data_0213b320;

s32 func_02013b08(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0213b320 + (arg0 * 4)));
}
