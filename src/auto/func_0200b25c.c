/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200afc0();                            /* extern */
M2C_UNK func_02013540();                            /* extern */

void func_0200b25c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1B8) == 0x27) {
        func_0200afc0(arg0);
        return;
    }
    func_02013540(arg0);
}
