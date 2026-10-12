/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();           /* extern */
s32 func_0202718c();                    /* extern */
M2C_UNK func_02036afc(); /* extern */
extern M2C_UNK data_020b82f4;

void func_02044630(void *arg0) {
    func_02036afc(arg0, func_0202718c(arg0 + 0x190, 0xAB), 0, 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x23;
    func_01ff9acc(arg0, &data_020b82f4);
}
