/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201520c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ec874;

M2C_UNK **func_020019b8(M2C_UNK **arg0) {
    *arg0 = &data_020ec874;
    func_0201520c();
    func_0209ab0c(arg0);
    return arg0;
}
