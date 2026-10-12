#include "m2c.h"

extern M2C_UNK data_02150c08;

void *func_02083d0c(s32 arg0) {
    return (M2C_UNK *)((s8 *)&data_02150c08 + (arg0 * 4));
}
