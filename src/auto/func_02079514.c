/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077b74(s32);                         /* extern */
s32 func_0207af9c();                                /* extern */

void func_02079514(s32 arg0) {
    s32 var_r0;

    if (func_0207af9c() == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02077b74(arg0 + 0x4C0);
}
