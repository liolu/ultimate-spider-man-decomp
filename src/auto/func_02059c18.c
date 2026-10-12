/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059aa4(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020d30f8;
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211816c;

void *func_02059c18(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211816c;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    func_02059aa4(arg0, &data_020d30f8);
    return arg0;
}
