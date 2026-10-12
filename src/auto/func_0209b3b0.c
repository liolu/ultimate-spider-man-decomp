/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094df4(M2C_UNK *);                   /* extern */
M2C_UNK func_0209bac0();                            /* extern */
M2C_UNK func_0209bc88();                            /* extern */
extern s32 data_02152ac4;
extern M2C_UNK data_02152ac8;

void func_0209b3b0(void) {
    if (data_02152ac4 != 0) {
        return;
    }
    data_02152ac4 = 1;
    func_02094df4(&data_02152ac8);
    func_0209bac0();
    func_0209bc88();
}
