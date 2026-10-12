/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077b80(M2C_UNK);                     /* extern */
M2C_UNK func_02078058(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020780cc();                                /* extern */

void func_02077dbc(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_020780cc() == 0) {
        return;
    }
    func_02078058(arg0, arg1);
    func_02077b80(arg0);
}
