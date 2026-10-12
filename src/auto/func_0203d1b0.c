#include "m2c.h"

extern M2C_UNK data_020b5980;
extern M2C_UNK data_0213d440;
extern M2C_UNK data_0213d58c;

M2C_UNK *func_0203d1b0(void *arg0) {
    M2C_UNK *var_r2;

    var_r2 = &data_020b5980;
    if ((M2C_FIELD(&data_0213d440, u8 *, 0x28) == 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0)) {
        var_r2 = &data_0213d58c;
    }
    return var_r2;
}
