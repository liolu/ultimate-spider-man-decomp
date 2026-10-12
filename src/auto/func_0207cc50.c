/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02065440(M2C_UNK, M2C_UNK, u32);       /* extern */

s32 func_0207cc50(M2C_UNK arg0, u32 arg1, M2C_UNK arg2, u32 *arg3) {
    if (arg1 > (u32) *arg3) {
        return -1;
    }
    *arg3 = arg1;
    func_02065440(arg2, arg0, arg1);
    return 0;
}
