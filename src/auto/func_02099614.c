/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02099614(void *arg0) {
    M2C_UNK (*temp_r2)(s32, M2C_UNK);
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 == 0) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 8);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(temp_r1, -1);
}
