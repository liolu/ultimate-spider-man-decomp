/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_020550f0(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021029a0;

M2C_UNK **func_02033dbc(M2C_UNK **arg0) {
    *arg0 = &data_021029a0;
    func_0202f630();
    func_020550f0(arg0);
    return arg0;
}
