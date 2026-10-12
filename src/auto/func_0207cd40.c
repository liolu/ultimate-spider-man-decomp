/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208fb84(s32);                             /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */

s32 func_0207cd40(s32 *arg0) {
    s32 var_r4;

    if (func_0208fb84(*arg0) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_0209ab0c(*arg0);
    return var_r4;
}
