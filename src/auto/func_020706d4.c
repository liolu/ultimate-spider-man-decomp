/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02070578(s32 *);                           /* extern */

s32 func_020706d4(s32 *arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = (func_02070578(&sp0) * 2) + 0x14;
    if (arg0 != NULL) {
        *arg0 = (sp0 * 2) + 5;
    }
    return temp_r0;
}
