/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab0c();                      /* extern */

void func_0205db38(void **arg0) {
    if (M2C_FIELD(*arg0, s32 *, 0x14) != 0) {
        func_0209ab0c();
    }
    func_0209ab0c(*arg0);
    *arg0 = NULL;
}
