/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02093c98();                            /* extern */
M2C_UNK func_02095620(s32);                         /* extern */

void func_0208defc(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02093c98(arg0);
    }
    func_02095620(M2C_FIELD(arg1, s32 *, 4));
}
