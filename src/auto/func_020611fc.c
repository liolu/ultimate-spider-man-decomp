/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028cc4(void *);                      /* extern */

void func_020611fc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x200) == 0) {
        return;
    }
    func_02028cc4(arg0 + 0x1FC);
}
