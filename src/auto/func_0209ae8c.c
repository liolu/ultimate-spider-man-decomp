/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab00();                         /* extern */
M2C_UNK func_0209aed4();        /* extern */

void func_0209ae8c(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_0209aed4(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_0209ab00(arg0 - arg2);
}
