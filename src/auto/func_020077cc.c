/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009c80();                            /* extern */
extern M2C_UNK data_020ecd84;

M2C_UNK **func_020077cc(M2C_UNK **arg0) {
    *arg0 = &data_020ecd84;
    func_02009c80();
    return arg0;
}
