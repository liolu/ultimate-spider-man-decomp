/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffca08(void *);                      /* extern */
M2C_UNK func_02033c58(s32);                         /* extern */

void func_0200a530(void *arg0) {
    func_02033c58(M2C_FIELD(arg0, s32 *, 0x17C));
    func_01ffca08(arg0);
}
