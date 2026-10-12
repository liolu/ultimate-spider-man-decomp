/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02086404(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x44) == 0) && (M2C_FIELD(arg0, s32 *, 0x50) == 0)) {
        return 1;
    }
    return 0;
}
