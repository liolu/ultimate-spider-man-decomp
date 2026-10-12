/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003940();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02116e0c;

M2C_UNK **func_020557fc(M2C_UNK **arg0) {
    *arg0 = &data_02116e0c;
    func_02003940();
    func_0209ab0c(arg0);
    return arg0;
}
