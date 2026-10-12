/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02045778();                            /* extern */
M2C_UNK func_02060060();                            /* extern */

void func_02060088(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x194) == 0x1F) {
        func_02060060(arg0);
        return;
    }
    func_02045778(arg0);
}
