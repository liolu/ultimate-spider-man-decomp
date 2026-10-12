/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02005070();                                /* extern */

s32 func_02051464(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x190) != 0) {
        return 0x26;
    }
    return func_02005070(arg0);
}
