/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208c930(u16);                         /* extern */
M2C_UNK func_0208c940(u16);                         /* extern */
s32 func_0208d10c(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
extern s32 data_0213b300;
extern s32 data_0213b304;

s32 func_0200fa88(M2C_UNK arg0) {
    s32 temp_r4;

    func_0208c940((u16) data_0213b304);
    temp_r4 = func_0208d10c(0, arg0, data_0213b300, 0, 0, 0);
    func_0208c930((u16) data_0213b304);
    if (temp_r4 != 0) {
        return 1;
    }
    return 0;
}
