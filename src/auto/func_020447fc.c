/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();           /* extern */
s32 func_0202718c();                    /* extern */
M2C_UNK func_02036994();        /* extern */
M2C_UNK func_020369e8();        /* extern */
M2C_UNK func_02036afc(); /* extern */
M2C_UNK func_02042df0();                            /* extern */
M2C_UNK func_020619a8();                    /* extern */
extern M2C_UNK data_020b82ec;

void func_020447fc(void *arg0) {
    s32 temp_r0;

    func_02042df0();
    func_020619a8(arg0 + 0x250, arg0 + 0x19C);
    temp_r0 = func_0202718c(arg0 + 0x190, 0x85);
    func_02036afc(arg0, temp_r0, 1, 0);
    func_020369e8(arg0, temp_r0, 0);
    func_02036994(arg0, temp_r0, 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x1F;
    func_01ff9acc(arg0, &data_020b82ec);
}
