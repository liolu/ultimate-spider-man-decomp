/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020555e0();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02116af8;
extern M2C_UNK data_02119e3c;

M2C_UNK **func_020659fc(M2C_UNK **arg0) {
    *arg0 = &data_02119e3c;
    *arg0 = &data_02116af8;
    func_020555e0(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
