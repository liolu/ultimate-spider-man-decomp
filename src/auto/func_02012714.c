#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void func_02012714(void *arg0, void *arg1) {
    void *temp_r1;

    temp_r1                       = M2C_FIELD(arg1, void **, 0x6F4);
    *(M2C_S8 *) ((s8 *) arg0 + 0) = *(M2C_S8 *) ((s8 *) temp_r1 + 76);
}
