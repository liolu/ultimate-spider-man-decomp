/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02086d70();                            /* extern */
extern s32 data_02150c2c;

s32 func_02086d90(s32 arg0) {
    data_02150c2c = arg0;
    func_02086d70();
    return arg0;
}
