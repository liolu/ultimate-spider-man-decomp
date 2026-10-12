/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001284();                                /* extern */

s32 func_0200b370(void *arg0) {
    if ((func_02001284() != 0) && (M2C_FIELD(arg0, u8 *, 8) != 0)) {
        return 1;
    }
    return 0;
}
