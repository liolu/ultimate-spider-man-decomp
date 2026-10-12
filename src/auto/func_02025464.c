/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024e7c();                            /* extern */
M2C_UNK func_0202f630(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8e80;

M2C_UNK **func_02025464(M2C_UNK **arg0) {
    *arg0 = &data_020f8e80;
    func_02024e7c();
    func_0202f630(arg0);
    *arg0 = &data_020efa10;
    return arg0;
}
