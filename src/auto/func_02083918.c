/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02083728(M2C_UNK);                         /* extern */
s32 func_0208394c();                                /* extern */

s32 func_02083918(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0208394c();
    if (temp_r4 == func_02083728(arg0)) {
        return 1;
    }
    return 0;
}
