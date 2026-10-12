/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033d5c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02118194;

M2C_UNK **func_0200a85c(M2C_UNK **arg0) {
    *arg0 = &data_02118194;
    func_02033d5c();
    func_0209ab0c(arg0);
    return arg0;
}
