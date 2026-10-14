/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020070d4();                            /* extern */

void func_0205e230(void **arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0x22) {
        if (M2C_FIELD(arg1, s32 *, 4) == 2) {
            M2C_FIELD(*arg0, M2C_UNK(**)(void **, s32), 0x210)(arg0, M2C_FIELD(arg1, s32 *, 8));
            return;
        }
        func_020070d4();
        return;
    }
    func_020070d4();
}
