/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02013e18();                            /* extern */

void func_02013ecc(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_02013e18();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}
