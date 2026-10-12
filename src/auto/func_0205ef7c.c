/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205ec48();                          /* extern */
s32 func_0205f550();                        /* extern */
extern s32 data_021183e8;

s32 func_0205ef7c(void *arg0) {
    if ((func_0205f550(arg0 + 0x9C8, data_021183e8) < 1) && (func_0205ec48(arg0) != 0) && (M2C_FIELD(arg0, s32 *, 0x700) == 0)) {
        return 1;
    }
    return 0;
}
