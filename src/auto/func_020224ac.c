/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f64c();                            /* extern */
M2C_UNK func_02046ff4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8b44;
extern M2C_UNK data_02143e44;

M2C_UNK **func_020224ac(M2C_UNK **arg0) {
    *arg0 = &data_020efa10;
    *arg0 = &data_020f8b44;
    func_0202f64c(arg0);
    func_02046ff4(&data_02143e44);
    return arg0;
}
