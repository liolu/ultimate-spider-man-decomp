/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204fed4(u8);                          /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8eac;
extern M2C_UNK data_02116558;

void *func_0205043c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02116558;
    func_0204fed4(M2C_FIELD(arg0, u8 *, 0x14));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8eac;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
