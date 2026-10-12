/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020149f4(M2C_UNK);                         /* extern */
s32 func_02014a44();                                /* extern */

s32 func_020149fc(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02014a44();
    if (temp_r4 == func_020149f4(arg0)) {
        return 1;
    }
    return 0;
}
