/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb69c(s32);                         /* extern */
M2C_UNK func_02087ff0(s32);                         /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211cd64;

void *func_0208be18(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211cd64;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4 != 0) {
        func_02087ff0(temp_r4);
        func_0209ab0c(temp_r4);
    }
    func_01ffb69c(M2C_FIELD(arg0, s32 *, 0x158));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
