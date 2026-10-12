/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020873dc();                                /* extern */

s32 func_02060224(void *arg0) {
    u16 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0xD0) == 0) {
        return func_020873dc() + 0x18;
    }
    temp_r4 = M2C_FIELD(arg0, u16 *, 0xD2);
    return func_020873dc() + 0xB4 + (temp_r4 * 0x10);
}
