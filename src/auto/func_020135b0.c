/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003940();                            /* extern */
extern M2C_UNK data_020f7920;

M2C_UNK **func_020135b0(M2C_UNK **arg0) {
    *arg0 = &data_020f7920;
    func_02003940();
    return arg0;
}
