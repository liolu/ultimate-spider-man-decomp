/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab00(s32);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02102118;

void *func_0202f0d8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102118;
    func_0209ab00(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
