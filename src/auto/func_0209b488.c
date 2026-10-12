/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020949ec();                                /* extern */
M2C_UNK func_0209567c(M2C_UNK);                     /* extern */
s32 func_02096428(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02096450(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_0209b4f4;

void func_0209b488(void) {
    func_02096450(7, &func_0209b4f4);
    if (func_020949ec() != 0) {
        return;
    }
    if (func_02096428(7, 1) != 0) {
        return;
    }
    do {
        func_0209567c(0x64);
    } while (func_02096428(7, 1) == 0);
}
