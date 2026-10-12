/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02037044();                                /* extern */
s32 func_02044dc8(M2C_UNK);                         /* extern */

s32 func_02044fa8(M2C_UNK arg0) {
    if ((func_02037044() != 0) || (func_02044dc8(arg0) != 0)) {
        return 1;
    }
    return 0;
}
