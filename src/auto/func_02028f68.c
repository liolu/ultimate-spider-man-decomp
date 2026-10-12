/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028e88(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_0213d6cc;
extern M2C_UNK data_0213d6d0;

M2C_UNK *func_02028f68(void) {
    if (!(data_0213d6cc & 1)) {
        func_02028e88(&data_0213d6d0, 3);
        data_0213d6cc |= 1;
    }
    return &data_0213d6d0;
}
