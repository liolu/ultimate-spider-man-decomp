#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_0208c470(s32 *arg0, s32 arg1, void *arg2) {
    s32 temp_r0;

    temp_r0                        = (arg1 * 0x1C) + *arg0;
    *(M2C_S12 *) ((s8 *) arg2 + 0) = *(M2C_S12 *) ((s8 *) temp_r0 + 0);
}
