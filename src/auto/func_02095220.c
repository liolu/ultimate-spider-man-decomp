/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094f74(M2C_UNK, s32);                /* extern */
M2C_UNK func_02094f88(M2C_UNK, s32);                /* extern */
s32 func_02094f9c(M2C_UNK);                         /* extern */
s32 func_02095084(M2C_UNK);                         /* extern */
extern s32 data_02151e1c;

void func_02095220(void) {
    if (data_02151e1c != 0) {
        return;
    }
    data_02151e1c = 1;
    func_02094f88(0, func_02095084(0));
    func_02094f74(0, func_02094f9c(0));
    func_02094f74(2, 0);
    func_02094f88(2, 0);
    func_02094f88(3, func_02095084(3));
    func_02094f74(3, func_02094f9c(3));
    func_02094f88(4, func_02095084(4));
    func_02094f74(4, func_02094f9c(4));
    func_02094f88(5, func_02095084(5));
    func_02094f74(5, func_02094f9c(5));
    func_02094f88(6, func_02095084(6));
    func_02094f74(6, func_02094f9c(6));
}
