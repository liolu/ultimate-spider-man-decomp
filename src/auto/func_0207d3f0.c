/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064cec(); /* extern */
s32 func_0207d334();                         /* extern */
M2C_UNK func_02091984();                            /* extern */
M2C_UNK func_02091cec();                     /* extern */
extern M2C_UNK data_021461d0;

void func_0207d3f0(M2C_UNK arg0) {
    s32 temp_r0;

    func_02091984();
    func_02091cec(arg0);
    temp_r0 = func_0207d334(arg0);
    if (temp_r0 <= 0x20) {
        *(s32 *)0x04001000 = (*(s32 *)0x04001000 & 0xFFCFFFEF) | 0x10;
        func_02064cec(&data_021461d0, 0x400, 1);
        return;
    }
    if (temp_r0 <= 0x40) {
        *(M2C_UNK *)0x04001000 = (s32) ((*(M2C_UNK *)0x04001000 & 0xFFCFFFEF) | 0x100010);
        func_02064cec(&data_021461d0, 0x800, 2);
        return;
    }
    if (temp_r0 <= 0x80) {
        *(M2C_UNK *)0x04001000 = (s32) ((*(M2C_UNK *)0x04001000 & 0xFFCFFFEF) | 0x200010);
        func_02064cec(&data_021461d0, 0x1000, 4);
        return;
    }
    if (temp_r0 > 0x100) {
        return;
    }
    *(M2C_UNK *)0x04001000 = (s32) ((*(M2C_UNK *)0x04001000 & 0xFFCFFFEF) | 0x300010);
    func_02064cec(&data_021461d0, 0x2000, 8);
}
