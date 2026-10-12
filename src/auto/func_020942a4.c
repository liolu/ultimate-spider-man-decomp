/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094198();                            /* extern */
s32 func_0209560c();                                /* extern */
M2C_UNK func_02095620(s32);                         /* extern */

void func_020942a4(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0209560c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02094198();
    func_02095620(temp_r4);
}
