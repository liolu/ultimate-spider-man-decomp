/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020b44d0;

s32 func_020241a8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x28) == 1) {
        return *((M2C_UNK *)((s8 *)&data_020b44d0 + (arg1 * 4))) * 2;
    }
    return *((M2C_UNK *)((s8 *)&data_020b44d0 + (arg1 * 4)));
}
