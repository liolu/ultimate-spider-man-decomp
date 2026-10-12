/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_020595e4(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02118144;

M2C_UNK **func_020599b8(M2C_UNK **arg0) {
    *arg0 = &data_02118144;
    func_0202f630();
    func_020595e4(arg0);
    *arg0 = &data_020efa10;
    return arg0;
}
