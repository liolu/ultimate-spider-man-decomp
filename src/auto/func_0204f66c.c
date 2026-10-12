/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_021164bc;

void *func_0204f66c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021164bc;
    func_0209ab0c(M2C_FIELD(arg0, void **, 0x18));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
