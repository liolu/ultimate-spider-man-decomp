/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc();              /* extern */
s32 func_01ffbcb8();                          /* extern */
M2C_UNK func_01ffc080();        /* extern */
void *func_0202718c();                  /* extern */
M2C_UNK func_02036afc(); /* extern */
M2C_UNK func_02038460();                 /* extern */

void func_02037a94(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    temp_r0                      = func_0202718c(arg0 + 0x190, 0x13);
    func_02036afc(arg0, temp_r0, 0, 0);
    func_02038460(arg0, M2C_FIELD(temp_r0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) (func_01ffbcb8(arg0) + 0xC);
    func_01ffc080(arg0, M2C_FIELD(temp_r0, s32 *, 0xC), 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0xB;
    func_01ff9acc(arg0, arg0 + 0x1B4);
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
}
