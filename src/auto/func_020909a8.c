/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_020909a8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1F) & 1) {
        return (u32) (M2C_FIELD(arg0, s32 *, 0x1C) << 8) >> 8;
    }
    return M2C_FIELD(arg0, u32 *, 8);
}
