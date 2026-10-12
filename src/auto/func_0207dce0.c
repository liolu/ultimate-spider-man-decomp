/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d2e4(M2C_UNK);                     /* extern */
M2C_UNK func_0207d2f4(M2C_UNK);                     /* extern */
M2C_UNK func_0207d304(M2C_UNK);                     /* extern */
M2C_UNK func_0207d314(M2C_UNK);                     /* extern */
M2C_UNK func_0207d324(M2C_UNK);                     /* extern */
M2C_UNK func_0207d6a4();                            /* extern */
M2C_UNK func_0207d7d8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0207deec();                            /* extern */
M2C_UNK func_020915d4();                            /* extern */

void func_0207dce0(void) {
    func_0207deec();
    func_0207d7d8(0, 2);
    func_0207d7d8(1, 3);
    func_0207d7d8(2, 6);
    func_0207d7d8(3, 7);
    func_0207d324(0x18);
    func_0207d314(0x18);
    func_0207d304(3);
    func_0207d2f4(3);
    func_0207d2e4(0);
    func_0207d6a4();
    *(u16 *)0x0400000E = (*(u16 *)0x0400000E & 0x43) | 0x6080;
    *(u16 *)0x0400100E = (*(u16 *)0x0400100E & 0x43) | 0x4080;
    func_020915d4();
    *(s32 *)0x04001000 |= 0x10000;
}
