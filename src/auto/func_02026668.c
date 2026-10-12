#include "m2c.h"

M2C_UNK func_0205a04c(void *, s32);                 /* extern */
extern M2C_UNK data_0213d440;

void func_02026668(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        var_r1 = M2C_FIELD(&data_0213d440, s32 *, 0x30);
    } else {
        var_r1 = M2C_FIELD(&data_0213d440, s32 *, 0x2C);
    }
    func_0205a04c(arg0 + 4, var_r1);
}
