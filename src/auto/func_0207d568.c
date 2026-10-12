/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064cec(); /* extern */
s32 func_0207d334();                         /* extern */
M2C_UNK func_02091a1c();                            /* extern */
M2C_UNK func_020922d8();                     /* extern */
extern M2C_UNK data_021467ec;

void func_0207d568(M2C_UNK arg0) {
    s32 temp_r0;

    func_02091a1c();
    func_020922d8(arg0);
    temp_r0 = func_0207d334(arg0);
    if (temp_r0 <= 0x20) {
        *(s32 *)0x04000000 = (*(s32 *)0x04000000 & 0xFFCFFFEF) | 0x10;
        func_02064cec(&data_021467ec, 0x400, 1);
        return;
    }
    if (temp_r0 <= 0x40) {
        *(M2C_UNK *)0x04000000 = (s32) ((*(M2C_UNK *)0x04000000 & 0xFFCFFFEF) | 0x100010);
        func_02064cec(&data_021467ec, 0x800, 2);
        return;
    }
    if (temp_r0 <= 0x80) {
        *(M2C_UNK *)0x04000000 = (s32) ((*(M2C_UNK *)0x04000000 & 0xFFCFFFEF) | 0x200010);
        func_02064cec(&data_021467ec, 0x1000, 4);
        return;
    }
    if (temp_r0 > 0x100) {
        return;
    }
    *(M2C_UNK *)0x04000000 = (s32) ((*(M2C_UNK *)0x04000000 & 0xFFCFFFEF) | 0x300010);
    func_02064cec(&data_021467ec, 0x2000, 8);
}
