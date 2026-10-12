/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02096244();                            /* extern */
s32 func_02096428(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02096450(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02151ec4;
extern M2C_UNK func_0209569c;

void func_020956e0(void) {
    if (data_02151ec4 != 0) {
        return;
    }
    data_02151ec4 = 1;
    func_02096244();
    do {

    } while (func_02096428(0xC, 1) == 0);
    func_02096450(0xC, &func_0209569c);
}
