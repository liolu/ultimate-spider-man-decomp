/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202718c();                             /* extern */
M2C_UNK func_02036afc(); /* extern */

void func_02036b68(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02036afc(arg0, func_0202718c(arg0 + 0x190), arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
}
