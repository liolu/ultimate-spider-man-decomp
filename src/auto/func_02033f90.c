/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202718c();                             /* extern */
M2C_UNK func_020369e8();             /* extern */
M2C_UNK func_02036afc(); /* extern */

void func_02033f90(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0202718c(arg0 + 0x190);
    func_02036afc(arg0, temp_r0, 0, 0);
    func_020369e8(arg0, temp_r0, M2C_FIELD(arg0, u8 *, 0x15E));
    M2C_FIELD(arg0, s32 *, 0x194) = 0x12;
}
