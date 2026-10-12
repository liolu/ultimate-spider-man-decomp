/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02059a78();                        /* extern */
void *func_02059a88();                           /* extern */
M2C_UNK func_0206122c(); /* extern */
s32 func_02061e04();                          /* extern */
M2C_UNK func_02061e68();           /* extern */

void func_020627ac(void *arg0) {
    u8 sp0[12];
    s32 var_r0;
    s32 var_r2;
    void *temp_r0;
    void *temp_r5;

    temp_r5 = func_02059a88(arg0 + 0x1D4);
    temp_r0 = func_02059a78(arg0 + 0x1D4);
    var_r2 = M2C_FIELD(temp_r5, s32 *, 0) - M2C_FIELD(temp_r0, s32 *, 0);
    if (var_r2 < 0) {
        var_r2 = 0 - var_r2;
    }
    var_r0 = M2C_FIELD(temp_r5, s32 *, 4) - M2C_FIELD(temp_r0, s32 *, 4);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    if ((s32) (var_r2 + var_r0) > 0x190) {
        M2C_FIELD(arg0, s32 *, 0x1C8) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C8) = 1;
    }
    if (func_02061e04(arg0) != 0) {
        return;
    }
    func_0206122c(sp0, arg0, func_02059a78(arg0 + 0x1D4), arg0 + 0x214);
    func_02061e68(arg0, sp0);
}
