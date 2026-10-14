/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();              /* extern */
s32 func_0202718c();                             /* extern */
M2C_UNK func_02035e20();                      /* extern */
M2C_UNK func_020369e8();        /* extern */
M2C_UNK func_02036a3c();    /* extern */
M2C_UNK func_02036afc(); /* extern */
s32 func_0203a72c();                     /* extern */

void func_02035d98(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x194) = 8;
    temp_r0                       = func_0202718c(arg0 + 0x190);
    func_02036afc(arg0, temp_r0, 1, 0);
    func_020369e8(arg0, temp_r0, 0);
    func_02036a3c(arg0, 9, 0);
    if (func_0203a72c(arg0, M2C_FIELD(arg0, s32 *, 0x30)) == 0) {
        func_02035e20(arg0);
    }
    func_01ff9acc(arg0, arg0 + 0x1BC);
}
