/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffbf08(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_01ffc028(M2C_UNK, s32);                /* extern */
M2C_UNK func_01ffc080();                            /* extern */

void func_02003f0c(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 var_r1;

    if ((M2C_FIELD(arg1, s32 *, 0) == 0x800) || (arg3 != 0)) {
        func_01ffc028(arg0, M2C_FIELD(arg1, s32 *, 4));
        if (arg2 != 0) {
            var_r1 = 0 - M2C_FIELD(arg1, s32 *, 8);
        } else {
            var_r1 = M2C_FIELD(arg1, s32 *, 8);
        }
        func_01ffbf08(arg0, var_r1, 0);
        return;
    }
    func_01ffc080(arg0, arg1);
}
