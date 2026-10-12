/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02093d2c();                            /* extern */
s32 func_02093e1c(); /* extern */

void func_02093f4c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_02093e1c() <= 0) {
        return;
    }
    do {
        func_02093d2c();
    } while (func_02093e1c(arg0, arg1, arg2, arg3) > 0);
}
