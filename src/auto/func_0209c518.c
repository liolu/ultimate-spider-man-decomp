/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b22c(s32, M2C_UNK);                /* extern */
extern s32 data_02154658;

void func_0209c518(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0209b22c(arg0, 0);
    data_02154658 &= ~arg0;
}
