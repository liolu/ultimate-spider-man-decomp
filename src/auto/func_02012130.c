/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205c9fc(M2C_UNK *);                   /* extern */
extern s32 data_0213b31c;
extern M2C_UNK func_02012178;

void *func_02012130(void *arg0) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    temp_r2                      = data_0213b31c;
    data_0213b31c                = temp_r2 + 1;
    if (temp_r2 == 0) {
        func_0205c9fc(&func_02012178);
    }
    return arg0;
}
