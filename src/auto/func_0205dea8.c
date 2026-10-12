/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004e44(void *, M2C_UNK);             /* extern */
M2C_UNK func_02061950(void *);                      /* extern */

void func_0205dea8(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x948) != 2) {
        func_02061950(arg0 + 0x778);
    }
    func_02004e44(arg0, arg1);
}
