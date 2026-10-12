/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028ba0(s32, M2C_UNK *);              /* extern */
s32 func_02034028(s32);                             /* extern */
M2C_UNK func_02036b68(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02037a10();                            /* extern */
extern M2C_UNK data_020b826c;

void func_0204080c(s32 arg0) {
    func_02037a10();
    if (func_02034028(arg0) == 0) {
        return;
    }
    func_02036b68(arg0, 0x6A, 0, 0);
    func_02028ba0(arg0 + 0x1C8, &data_020b826c);
}
