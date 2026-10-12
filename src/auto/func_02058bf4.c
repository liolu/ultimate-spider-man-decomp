/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bf9c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02117ef4;

M2C_UNK **func_02058bf4(M2C_UNK **arg0) {
    *arg0 = &data_02117ef4;
    func_0205bf9c();
    func_0209ab0c(arg0);
    return arg0;
}
