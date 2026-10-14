/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bee4(void *, s32);                 /* extern */
s32 func_0209c134(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0209db04();                            /* extern */

s32 func_0209da74(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0209c134(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0209db04();
    func_0209bee4(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
