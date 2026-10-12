/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038180();                            /* extern */
M2C_UNK func_0203f234();                            /* extern */

void func_0203f2b0(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x1C) << 0x1B) >> 0x1F) != 0) {
        func_0203f234(arg0);
        return;
    }
    func_02038180(arg0);
}
