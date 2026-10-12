/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f64c();                            /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8e80;

void *func_0202549c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8e80;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0202f64c(arg0);
    return arg0;
}
