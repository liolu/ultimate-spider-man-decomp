/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02090a48(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211ca6c;

void *func_02083f3c(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ca6c;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
    func_02090a48(arg0 + 8);
    return arg0;
}
