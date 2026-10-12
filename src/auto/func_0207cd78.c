/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fc8(M2C_UNK);                         /* extern */
M2C_UNK func_0208fbd0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0208ff2c();                            /* extern */

s32 func_0207cd78(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02064fc8(0x44);
    func_0208ff2c();
    func_0208fbd0(temp_r4, arg0);
    return temp_r4;
}
