/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028cc4();                            /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020fcd1c;

void *func_02028d3c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fcd1c;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02028cc4(arg0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
