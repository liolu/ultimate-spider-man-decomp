/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018bcc();                            /* extern */

void func_02051e24(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0) {
        func_02018bcc();
    }
    if (M2C_FIELD(arg1, s32 *, 4) == 0) {
        return;
    }
    func_02018bcc();
}
