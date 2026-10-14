/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa7dc();                            /* extern */
extern M2C_UNK data_0210538c;

void *func_0204ad1c(void *arg0) {
    func_01ffa7dc();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210538c;
    M2C_FIELD(arg0, s32 *, 0xBC)   = 0;
    return arg0;
}
