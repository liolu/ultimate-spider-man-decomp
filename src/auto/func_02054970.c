/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009418();                      /* extern */
M2C_UNK func_02028d80();                         /* extern */
M2C_UNK func_0209ab0c();                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02116ca4;
extern M2C_UNK data_0211816c;

void *func_02054970(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02116ca4;
    func_02028d80(arg0 + 0x1FC);
    M2C_FIELD(arg0, M2C_UNK **, 0x1D4) = &data_0211816c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1D4) = &data_020efa10;
    func_02009418(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
