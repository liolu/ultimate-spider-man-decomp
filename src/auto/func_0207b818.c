/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f4a0(M2C_UNK **);                  /* extern */
M2C_UNK func_020776a4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020776ac(s32, M2C_UNK);                /* extern */
s32 func_02077720();                                /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211bee4;

M2C_UNK **func_0207b818(M2C_UNK **arg0) {
    *arg0 = &data_0211bee4;
    func_020776a4(func_02077720(), 0);
    func_020776ac(func_02077720(), 2);
    func_0202f4a0(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
