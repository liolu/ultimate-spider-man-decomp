/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02091934();                            /* extern */
M2C_UNK func_0209195c();                            /* extern */
M2C_UNK func_02091984();                            /* extern */
M2C_UNK func_02091998();                            /* extern */
M2C_UNK func_020919ac();                            /* extern */
M2C_UNK func_020919c0();                            /* extern */
M2C_UNK func_02091a1c();                            /* extern */
M2C_UNK func_02091a30();                            /* extern */
M2C_UNK func_02092f58(M2C_UNK *);                   /* extern */
M2C_UNK func_02092f70(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0211c16c;
extern M2C_UNK data_02150aec;

void func_0207d880(void) {
    func_02091a30();
    func_02091a1c();
    func_020919c0();
    func_02092f58(&data_0211c16c);
    func_02092f70(&data_02150aec);
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & ~0x3000) | 0x20;
    func_020919ac();
    func_02091998();
    func_02091984();
    func_0209195c();
    func_02091934();
}
