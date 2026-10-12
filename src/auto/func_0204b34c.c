/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f4a0(M2C_UNK **);                  /* extern */
M2C_UNK func_0202f630();                            /* extern */
extern M2C_UNK data_02108348;

M2C_UNK **func_0204b34c(M2C_UNK **arg0) {
    *arg0 = &data_02108348;
    func_0202f630();
    func_0202f4a0(arg0);
    return arg0;
}
