/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02096374(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_02096d60(s32 arg0) {
    if (func_02096374(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
