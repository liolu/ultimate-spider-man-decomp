/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02018cfc(s32);                           /* extern */

s32 func_02006428(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x19C);
    }
    return M2C_FIELD(func_02018cfc(temp_r1), s32 *, 4);
}
