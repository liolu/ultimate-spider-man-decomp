/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200291c();                            /* extern */

void func_02002aa4(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) != 0) {
        M2C_FIELD(arg0, s32 *, 0x78) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x108)(arg0);
        return;
    }
    func_0200291c(arg0);
}
