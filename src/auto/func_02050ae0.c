/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020034bc();                            /* extern */
M2C_UNK func_0205098c();                            /* extern */

void func_02050ae0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x748) == 0) {
        func_0205098c(arg0);
        return;
    }
    func_020034bc(arg0);
}
