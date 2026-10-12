/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();              /* extern */
M2C_UNK func_01ffbf08();        /* extern */
M2C_UNK func_01ffc028();                 /* extern */
void *func_0202718c();                  /* extern */
M2C_UNK func_02036afc(); /* extern */

void func_02037a10(void *arg0) {
    void *temp_r1;
    void *temp_r4;

    temp_r4 = func_0202718c(arg0 + 0x190, 0x14);
    temp_r1 = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x220) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    func_02036afc(arg0, temp_r1, 0, 0);
    func_01ffc028(arg0, M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 4));
    func_01ffbf08(arg0, M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 8), 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0xC;
    func_01ff9acc(arg0, arg0 + 0x1B4);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
