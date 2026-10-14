/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02033c10(void **arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0x1B) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 9) {
        return;
    }
    M2C_FIELD(*arg0, M2C_UNK(**)(), 0x24)(arg0);
}
