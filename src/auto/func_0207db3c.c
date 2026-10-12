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
M2C_UNK func_02092a74(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0207db3c(M2C_UNK arg0, s32 arg1) {
    func_0207deec();
    func_0207d7d8(0, 0xA);
    func_0207d7d8(1, 0xA);
    func_0207d7d8(2, 0xA);
    func_0207d7d8(5, 0xB);
    func_0207d7d8(4, 3);
    func_0207d7d8(6, 5);
    func_0207d7d8(7, 6);
    func_0207d7d8(3, 7);
    func_0207d7d8(8, 9);
    func_0207d324(0x11);
    func_0207d314(0x18);
    func_0207d304(0);
    func_0207d2f4(0);
    func_0207d2e4(1);
    func_0207d6a4();
    func_02092a74(0x04000050, 0, 0x29, 0xA, 0x10);
    *(s32 *)0x04000540 = 3;
    *(u16 *)0x04000060 = (*(u16 *)0x04000060 & ~0x3000) | 8;
    *(s32 *)0x04000580 = 0xBFFF0000;
    func_02092a74(0x04001050, 0, 8, arg0, arg1);
    *(s16 *)0x0400004A = 0x20;
    *(s16 *)0x04000048 = 0x3F;
    *(s16 *)0x04000040 = 0x1FE;
    *(s16 *)0x04000044 = 0x1BE;
    *(s32 *)0x04000000 = (*(s32 *)0x04000000 & ~0xE000) | 0x2000;
    *(s32 *)0x04001000 |= 0x10000;
    func_020915d4();
}
