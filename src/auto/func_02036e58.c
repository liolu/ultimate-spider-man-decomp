/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02036cb0(M2C_UNK);

s32 func_02036e58(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x30) != 0) && (func_02036cb0(arg0) != 0)) {
        return 1;
    }
    return 0;
}
