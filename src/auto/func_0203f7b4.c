/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();           /* extern */
s32 func_0202718c();                    /* extern */
M2C_UNK func_02036994();        /* extern */
M2C_UNK func_020369e8();        /* extern */
M2C_UNK func_02036afc(); /* extern */
extern M2C_UNK data_020b7f28;

void func_0203f7b4(void *arg0) {
    M2C_UNK var_r2;
    s32 temp_r0;

    temp_r0 = func_0202718c(arg0 + 0x190, 0x96);
    func_02036afc(arg0, temp_r0, 0, 0);
    if (M2C_FIELD(arg0, s32 *, 0x30) == 2) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_020369e8(arg0, temp_r0, var_r2);
    func_02036994(arg0, temp_r0, 0);
    func_01ff9acc(arg0, &data_020b7f28);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x25;
}
