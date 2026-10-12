/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020090f0();     /* extern */
M2C_UNK func_02009120();                 /* extern */

void func_0206219c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    func_02009120(arg0, arg0 + 0x208);
    func_020090f0(arg0, arg0 + 0x208, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1D0) = 3;
}
