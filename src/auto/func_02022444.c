/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8b44;

M2C_UNK **func_02022444(M2C_UNK **arg0) {
    *arg0 = &data_020f8b44;
    func_0202f630();
    *arg0 = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
