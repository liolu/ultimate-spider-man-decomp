/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_02046eb8(M2C_UNK);

s32 func_02046ed0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8) + 1;
    if (temp_r4 < (s32) M2C_FIELD((void *) func_02046eb8(arg0), s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 8) = temp_r4;
    }
    if (M2C_FIELD(arg0, s32 *, 8) == temp_r4) {
        return 1;
    }
    return 0;
}
