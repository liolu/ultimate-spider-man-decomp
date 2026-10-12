/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02094974();                                /* extern */
M2C_UNK func_02094f74(M2C_UNK, s32);                /* extern */
M2C_UNK func_02094f88(M2C_UNK, s32);                /* extern */
s32 func_02094f9c(M2C_UNK);                         /* extern */
s32 func_02095084(M2C_UNK);                         /* extern */
M2C_UNK func_0209536c(s32);                         /* extern */
extern s32 data_02151e20;

void func_020951ac(void) {
    func_02094f88(2, func_02095084(2));
    func_02094f74(2, func_02094f9c(2));
    if ((data_02151e20 != 0) && ((func_02094974() & 3) != 1)) {
        return;
    }
    func_0209536c(0x0200002B);
}
