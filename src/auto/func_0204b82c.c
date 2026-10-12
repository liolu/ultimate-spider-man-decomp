/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f1a4(s32, void *, s32 *);          /* extern */

void func_0204b82c(void *arg0, s32 arg1) {
    s32 sp0;

    if (arg1 == 0) {
        return;
    }
    sp0 = M2C_FIELD(arg0, s32 *, 0x24);
    func_0200f1a4(arg1, arg0 + 0x4C, &sp0);
}
