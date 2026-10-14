/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033e28();                            /* extern */
extern M2C_UNK data_02118194;

void *func_02059f5c(void *arg0) {
    func_02033e28();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02118194;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    return arg0;
}
