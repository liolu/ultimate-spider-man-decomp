/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008770(void *, M2C_UNK);             /* extern */
M2C_UNK func_020133cc(void *);                      /* extern */

void func_02007930(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x180) == 0x46) {
        func_02008770(arg0 + 0x754, 0);
    }
    func_020133cc(arg0);
}
