/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f550(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0209ae3c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 data_0213e1f4;
extern M2C_UNK data_0213e1f8;
extern M2C_UNK data_0213e204;
extern M2C_UNK func_0202f518;

M2C_UNK *func_0202f66c(void) {
    if (!(data_0213e1f4 & 1)) {
        func_0202f550(&data_0213e204, 1);
        func_0209ae3c(&data_0213e204, &func_0202f518, &data_0213e1f8);
        data_0213e1f4 |= 1;
    }
    return &data_0213e204;
}
