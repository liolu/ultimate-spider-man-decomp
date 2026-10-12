#include "m2c.h"

extern M2C_UNK data_0213d440;
extern M2C_UNK data_0213d588;

s32 func_0203d144(void *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if ((M2C_FIELD(&data_0213d440, u8 *, 0x28) == 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0)) {
        var_r2 = M2C_FIELD(&data_0213d588, s32 *, 4) & 0xF0;
    }
    return var_r2;
}
