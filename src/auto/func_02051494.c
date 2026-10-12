/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02005078();                                /* extern */

s32 func_02051494(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x190) != 0) {
        return 0x25;
    }
    return func_02005078(arg0);
}
