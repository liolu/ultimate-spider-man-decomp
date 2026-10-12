/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02045c38();                            /* extern */
extern M2C_UNK data_02118b70;

M2C_UNK **func_020600e8(M2C_UNK **arg0) {
    *arg0 = &data_02118b70;
    func_02045c38();
    return arg0;
}
