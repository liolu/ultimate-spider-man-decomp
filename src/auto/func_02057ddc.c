/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f790();                            /* extern */

void func_02057ddc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6F4) == 0) {
        return;
    }
    func_0202f790(arg0);
    M2C_FIELD(arg0, s32 *, 0x6F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x700) = 3;
}
