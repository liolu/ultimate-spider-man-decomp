/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207cf4c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211c1b4;

M2C_UNK **func_0207dfc8(M2C_UNK **arg0) {
    *arg0 = &data_0211c1b4;
    func_0207cf4c();
    func_0209ab0c(arg0);
    return arg0;
}
