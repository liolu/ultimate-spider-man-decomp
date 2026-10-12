/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002aec();                            /* extern */
M2C_UNK func_02011464(void *);                      /* extern */

void func_02050ff8(void *arg0) {
    func_02002aec();
    if (M2C_FIELD(arg0, s32 *, 0x180) != 0x3F) {
        return;
    }
    func_02011464(arg0 + 0x780);
}
