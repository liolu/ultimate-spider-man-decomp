/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020780cc();                                /* extern */

s32 func_02078258(void *arg0, void *arg1, s32 arg2) {
    if (func_020780cc() == 0) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 8) == 0) && ((M2C_FIELD(arg1, u8 *, 8) != 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0) + arg2) < (s32) M2C_FIELD(arg0, s32 *, 0)))) {
        return 1;
    }
    return 0;
}
