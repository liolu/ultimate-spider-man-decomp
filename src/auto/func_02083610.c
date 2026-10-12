/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020836d0(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211c924;

void *func_02083610(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c924;
    func_020836d0(arg0 + 4, 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return arg0;
}
