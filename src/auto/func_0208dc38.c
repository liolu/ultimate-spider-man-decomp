/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208dc9c(M2C_UNK);                     /* extern */
s32 func_02096374(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_0208dc38(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02096374(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        func_0208dc9c(arg1);
    } while (func_02096374(0xE, arg0, 0) != 0);
}
