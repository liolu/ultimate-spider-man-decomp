/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201520c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ef6bc;

M2C_UNK **func_0200ab7c(M2C_UNK **arg0) {
    *arg0 = &data_020ef6bc;
    func_0201520c();
    func_0209ab0c(arg0);
    return arg0;
}
