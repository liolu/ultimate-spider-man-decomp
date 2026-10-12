/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202718c();                    /* extern */
M2C_UNK func_02036afc(); /* extern */
M2C_UNK func_02038a1c();             /* extern */

void func_02040234(void *arg0) {
    func_02036afc(arg0, func_0202718c(arg0 + 0x190, 0x94), 0, 0);
    func_02038a1c(arg0, 3);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x23;
}
