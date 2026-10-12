/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02054f20();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020f8e44;

M2C_UNK **func_0202417c(M2C_UNK **arg0) {
    *arg0 = &data_020f8e44;
    func_02054f20();
    func_0209ab0c(arg0);
    return arg0;
}
