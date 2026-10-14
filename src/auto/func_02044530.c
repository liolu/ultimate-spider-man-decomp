/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();           /* extern */
void *func_0202718c();                  /* extern */
M2C_UNK func_02036994();     /* extern */
M2C_UNK func_020369e8();     /* extern */
M2C_UNK func_02036afc(); /* extern */
M2C_UNK func_0207c284(); /* extern */
extern M2C_UNK data_020b82ec;
extern M2C_UNK data_0214876c;

void func_02044530(void *arg0) {
    void *temp_r0;

    temp_r0 = func_0202718c(arg0 + 0x190, 0xAC);
    func_02036afc(arg0, temp_r0, 0, 0);
    func_020369e8(arg0, temp_r0, 0);
    func_02036994(arg0, temp_r0, 0);
    func_0207c284(&data_0214876c, M2C_FIELD(temp_r0, s32 *, 0x10), 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x24;
    M2C_FIELD(arg0, s32 *, 0x30)  = 0;
    func_01ff9acc(arg0, &data_020b82ec);
}
