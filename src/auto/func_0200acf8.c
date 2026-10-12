/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009c80();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ef7d4;

M2C_UNK **func_0200acf8(M2C_UNK **arg0) {
    *arg0 = &data_020ef7d4;
    func_02009c80();
    func_0209ab0c(arg0);
    return arg0;
}
