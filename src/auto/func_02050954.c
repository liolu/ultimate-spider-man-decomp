/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003ca8();                              /* extern */

void *func_02050954(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x748) == 0) {
        return arg0 + 0x754;
    }
    return func_02003ca8();
}
