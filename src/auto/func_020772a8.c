#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

s32 func_020772a8(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r3;

    temp_r0                           = arg0 + 0xC;
    temp_r3                           = arg1 + M2C_FIELD(arg0, s32 *, 4);
    *(M2C_S12 *) ((s8 *) temp_r3 + 0) = *(M2C_S12 *) ((s8 *) arg0 + 12);

    return 0;
}
