/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b258(s32, M2C_UNK);                /* extern */
extern s32 data_02154658;

s32 func_0209c550(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_02154658) {
        return 0;
    }
    func_0209b258(arg0, 0);
    data_02154658 |= arg0;
    return 1;
}
