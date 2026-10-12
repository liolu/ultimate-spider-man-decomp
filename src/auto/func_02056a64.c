/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f5a0(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_021170c4;
extern void *data_021460f8;

void *func_02056a64(void *arg0) {
    func_0202f5a0(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021170c4;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    data_021460f8 = arg0;
    return arg0;
}
