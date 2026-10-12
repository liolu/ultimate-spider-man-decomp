/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205ca5c();                            /* extern */
M2C_UNK func_02064a8c();                            /* extern */
M2C_UNK func_02064ab8();                            /* extern */
M2C_UNK func_0207d380();                         /* extern */
M2C_UNK func_0207d39c();                         /* extern */
M2C_UNK func_0207d3b8();                         /* extern */
M2C_UNK func_0207d3d4();                         /* extern */
M2C_UNK func_0207d3f0();                         /* extern */
M2C_UNK func_0207d514();                         /* extern */
M2C_UNK func_0207d530();                         /* extern */
M2C_UNK func_0207d54c();                         /* extern */
M2C_UNK func_0207d568();                         /* extern */
M2C_UNK func_0207d688();                         /* extern */
M2C_UNK func_0207d880();                            /* extern */
M2C_UNK func_02091544();                         /* extern */
M2C_UNK func_02091560();       /* extern */
M2C_UNK func_02091620();                            /* extern */
extern u8 data_02150aa0;
extern s32 data_02150aa4;
extern s32 data_02150aa8;
extern s32 data_02150aac;
extern s32 data_02150ab0;
extern M2C_UNK data_02150abc;

void func_0207d6a4(void) {
    M2C_UNK var_r2;

    func_0205ca5c();
    func_02091620();
    *(s32 *)0x04001000 &= ~0x10000;
    func_0207d880();
    func_02064ab8();
    func_02064a8c();
    func_0207d688(M2C_FIELD(&data_02150abc, s32 *, 8));
    func_0207d568(M2C_FIELD(&data_02150abc, s32 *, 0xC));
    func_0207d54c(M2C_FIELD(&data_02150abc, s32 *, 0x10));
    func_0207d530(M2C_FIELD(&data_02150abc, s32 *, 0x14));
    func_0207d514(M2C_FIELD(&data_02150abc, s32 *, 0x18));
    func_0207d3f0(M2C_FIELD(&data_02150abc, s32 *, 0x1C));
    func_0207d3d4(M2C_FIELD(&data_02150abc, s32 *, 0x20));
    func_0207d3b8(M2C_FIELD(&data_02150abc, s32 *, 0x24));
    func_0207d39c(M2C_FIELD(&data_02150abc, s32 *, 0x28));
    func_0207d380(M2C_FIELD(&data_02150abc, s32 *, 0x2C));
    if (data_02150aa0 != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_02091560(1, data_02150ab0, var_r2);
    func_02091544(data_02150aac);
    *(s32 *)0x04000000 = (*(s32 *)0x04000000 & ~0x1F00) | (data_02150aa8 << 8);
    *(M2C_UNK *)0x04001000 = (s32) ((*(M2C_UNK *)0x04001000 & ~0x1F00) | (data_02150aa4 << 8));
}
