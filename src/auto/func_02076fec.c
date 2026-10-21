/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0211bdfc;
extern M2C_UNK data_0211be4c;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void *func_02076fec(void *arg0, s32 arg1, void *arg2) {
    void *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_0211be4c;
    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_0211bdfc;
    M2C_FIELD(arg0, s32 *, 4)       = arg1;
    M2C_FIELD(arg0, s32 *, 8)       = 0;
    temp_r3                         = arg0 + 0xC;
    *(M2C_S12 *) ((s8 *) arg0 + 12) = *(M2C_S12 *) ((s8 *) arg2 + 0);

    return arg0;
}
