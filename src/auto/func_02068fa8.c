/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02087180();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211cbd8;

M2C_UNK **func_02068fa8(M2C_UNK **arg0) {
    *arg0 = &data_0211cbd8;
    func_02087180();
    func_0209ab0c(arg0);
    return arg0;
}
