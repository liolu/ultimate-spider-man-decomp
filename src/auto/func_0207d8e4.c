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

void func_0207d8e4(void) {
    func_0207deec();
    func_0207d7d8(4, 2);
    func_0207d7d8(0, 3);
    func_0207d7d8(1, 3);
    func_0207d7d8(6, 5);
    func_0207d7d8(2, 6);
    func_0207d7d8(3, 7);
    func_0207d7d8(8, 9);
    func_0207d324(0x18);
    func_0207d314(0x18);
    func_0207d304(0);
    func_0207d2f4(0);
    func_0207d2e4(1);
    func_0207d6a4();
    *(s32 *) 0x04000000 &= ~0xE000;
    func_020915d4();
    *(s32 *) 0x04001000 |= 0x10000;
}
