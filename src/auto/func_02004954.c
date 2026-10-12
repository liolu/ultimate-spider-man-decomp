/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9b28(void *);                      /* extern */
s32 func_020855d4(s32);                             /* extern */

void func_02004954(void *arg0) {
    if (func_020855d4(M2C_FIELD(arg0, s32 *, 0xBC)) != 0) {
        return;
    }
    func_01ff9b28(arg0);
}
