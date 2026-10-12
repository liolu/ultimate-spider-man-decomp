/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab00(s32);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_021025a8;

void *func_02030f50(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021025a8;
    func_0209ab00(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
