/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200166c(M2C_UNK);
M2C_UNK func_0200168c(M2C_UNK);

extern s32 data_0213b6e0;

s32 func_020018c8(s32 arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC0) <= (s32) data_0213b6e0) &&
        ((s32) * (s32 *) func_0200166c(arg0) < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), s32 *, 4)) &&
        ((s32) * (s32 *) func_0200168c(arg0) > 0)) {
        return 1;
    }
    return 0;
}
