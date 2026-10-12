/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02028b70(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0x15) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 8) == M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
