/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
s32 func_01ffb5e4(M2C_UNK);                         /* extern */
M2C_UNK func_02024ce0(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02024ca4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    func_01ffb558(arg2);
    temp_r4 = func_01ffb5e4(arg1);
    func_01ffb540();
    func_02024ce0(arg0, temp_r4, arg1);
}
