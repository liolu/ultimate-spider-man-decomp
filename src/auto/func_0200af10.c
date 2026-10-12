/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005134();                      /* extern */
M2C_UNK func_0200ae54();                      /* extern */
M2C_UNK func_0200b040();                            /* extern */
s32 func_02057bc8();                                /* extern */

void func_0200af10(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x748) == 2) {
            func_0200b040(arg0);
            return;
        }
        if (func_02057bc8() < 0xFA0) {
            func_0200ae54(arg0);
            return;
        }
        func_02005134(arg0);
        return;
    }
    func_02005134(arg0);
}
