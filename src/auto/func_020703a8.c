/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ca5c();                            /* extern */
M2C_UNK func_02070218();                            /* extern */
s32 func_02070480();                         /* extern */

void func_020703a8(M2C_UNK arg0) {
    if (func_02070480() == 0) {
        return;
    }
    do {
        func_02070218();
        func_0205ca5c();
    } while (func_02070480(arg0) != 0);
}
