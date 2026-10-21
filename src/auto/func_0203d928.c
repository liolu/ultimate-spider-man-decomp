/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0203d928(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x24C);
    if (temp_r0 == NULL) {
        return;
    }
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x24C) = NULL;
    M2C_FIELD(arg0, s32 *, 0x250)    = 0;
}
