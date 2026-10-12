/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209b544();                                /* extern */
s32 func_0209b584();                                /* extern */

s32 func_0209b524(void) {
    s32 temp_r4;

    temp_r4 = func_0209b584();
    return (0x100 - temp_r4) - func_0209b544();
}
