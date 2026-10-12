/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020699dc();                            /* extern */
M2C_UNK func_0207c284(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0214876c;

void func_02067314(void *arg0) {
    func_020699dc();
    func_0207c284(&data_0214876c, M2C_FIELD(arg0, s32 *, 0x48), 0, 0, 0);
}
