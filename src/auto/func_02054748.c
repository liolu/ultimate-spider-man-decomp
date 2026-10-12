/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02054238();                            /* extern */

void func_02054748(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) != 0) {
        return;
    }
    func_02054238(arg0, arg1);
}
