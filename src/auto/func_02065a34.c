/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02053674();                            /* extern */
M2C_UNK func_0207c284(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02084df0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02119e68;
extern M2C_UNK data_0214876c;

void func_02065a34(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0xA) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 7) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        return;
    }
    func_02053674(arg0);
    func_0207c284(&data_0214876c, &data_02119e68, 0, 0, 0);
    func_02084df0(&data_0214876c, 0xFA, 0);
}
