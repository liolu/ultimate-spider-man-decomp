/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bf90();                /* extern */
s32 func_0209da74();                           /* extern */

s32 func_0209dac4(s32 *arg0, s32 arg1) {
    func_0209bf90(((s8 *)arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0209da74(arg0) != 0) {
        return 1;
    }
    return 0;
}
