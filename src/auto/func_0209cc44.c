#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021547cc;

void func_0209cc44(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021547cc + (arg0 << 5))) = (s32) (u16) arg1;
}
