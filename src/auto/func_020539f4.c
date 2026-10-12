/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02009120();    /* extern */
M2C_UNK func_02009184();        /* extern */
M2C_UNK func_02028ba0();           /* extern */
extern M2C_UNK data_02116c7c;

void func_020539f4(void *arg0, M2C_UNK arg1) {
    func_02009184(arg0, arg0 + 0x188, 0);
    func_02009120(arg0, arg1, 0);
    func_02028ba0(arg0 + 0x1FC, &data_02116c7c);
    M2C_FIELD(arg0, s32 *, 0x1D0) = 5;
}
