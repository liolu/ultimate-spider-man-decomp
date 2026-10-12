#include "m2c.h"

extern s32 data_0213b6e0;

void func_0205b204(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6F0) = (s32) (data_0213b6e0 + arg1);
}
