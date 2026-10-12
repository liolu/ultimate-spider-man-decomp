/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205e230();                            /* extern */
M2C_UNK func_02060a18();                            /* extern */

void func_0206076c(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0x22) {
        if (M2C_FIELD(arg1, s32 *, 4) == 4) {
            func_02060a18(arg0, arg1);
            return;
        }
        func_0205e230(arg0, arg1);
        return;
    }
    func_0205e230(arg0, arg1);
}
