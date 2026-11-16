/* compiler: 2.0/sp1p5 -proc arm7tdmi */
#include "m2c.h"

M2C_UNK func_02026834();                         /* extern */
M2C_UNK func_02030d8c();          /* extern */
M2C_UNK func_02030d98();          /* extern */

void func_02030d30(void *arg0) {
    s32 sp4;
    s32 sp0;

    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    func_02026834(arg0 + 0x104);
    sp0 = 0;
    func_02030d8c(&sp0, arg0 + 0x118, 0x05000010);
    sp4 = 0;
    func_02030d98(&sp4, arg0 + 0x158, 0x05000010);
}
