/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc(void *, void *);              /* extern */
s32 func_0202718c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02036994(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020369e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02036afc(void *, s32, M2C_UNK, M2C_UNK); /* extern */

void func_02036010(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = 3;
    M2C_FIELD(arg0, s32 *, 0x194) = 4;
    temp_r0 = func_0202718c(arg0 + 0x190, 8);
    func_02036afc(arg0, temp_r0, 1, 0);
    func_020369e8(arg0, temp_r0, 0);
    func_02036994(arg0, temp_r0, 0);
    func_01ff9acc(arg0, arg0 + 0x1BC);
}
