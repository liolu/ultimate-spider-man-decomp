/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028dfc();                            /* extern */
M2C_UNK func_02028f2c(M2C_UNK);                     /* extern */
s32 func_0204a770();                                /* extern */
M2C_UNK func_0204a7b0();                            /* extern */

void func_02021ed0(s32 arg0, M2C_UNK arg1) {
    func_02028f2c(arg1);
    if (func_0204a770() != 0) {
        return;
    }
    func_02028f2c(arg1);
    func_0204a7b0();
    func_02028dfc();
}
