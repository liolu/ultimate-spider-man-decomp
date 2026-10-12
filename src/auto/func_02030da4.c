/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02026884();                /* extern */
M2C_UNK func_02030d30();                      /* extern */

void *func_02030da4(void *arg0, s32 arg1, s32 arg2) {
    func_02026884(arg0 + 0x104, 0x10);
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    M2C_FIELD(arg0, s32 *, 0x114) = arg2;
    func_02030d30(arg0);
    return arg0;
}
