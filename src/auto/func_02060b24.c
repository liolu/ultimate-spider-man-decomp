/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02060914();                            /* extern */
M2C_UNK func_02060ae8();                            /* extern */

void func_02060b24(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x748) > 0) {
        func_02060ae8(arg0);
        return;
    }
    func_02060914(arg0);
}
