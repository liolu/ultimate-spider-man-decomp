/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020134b8();                                /* extern */

s32 func_0200fce0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1B8) == 0x26) {
        if (M2C_FIELD(arg0, s32 *, 0x180) != 0xD) {
            return 0;
        }
        return func_020134b8(arg0);
    }
    return func_020134b8(arg0);
}
