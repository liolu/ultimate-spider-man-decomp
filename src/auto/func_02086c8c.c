/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02086c68();                            /* extern */
extern s32 data_02150c28;

s32 func_02086c8c(s32 arg0) {
    data_02150c28 = arg0;
    func_02086c68();
    return arg0;
}
