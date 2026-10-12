/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201520c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020f6064;

M2C_UNK **func_0200ee3c(M2C_UNK **arg0) {
    *arg0 = &data_020f6064;
    func_0201520c();
    func_0209ab0c(arg0);
    return arg0;
}
