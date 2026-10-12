/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fc8(M2C_UNK);                         /* extern */
s32 func_02067078(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_020d6644;
extern M2C_UNK data_0213ab64;

void func_02067f08(void *arg0) {
    s32 var_r0;
    void *temp_lr;

    var_r0 = func_02064fc8(0x14);
    if (var_r0 != 0) {
        temp_lr = M2C_FIELD(arg0, void **, 4);
        var_r0 = func_02067078(var_r0, &data_0213ab64, 1, &data_020d6644, M2C_FIELD(temp_lr, s32 *, 0x10), M2C_FIELD(temp_lr, s32 *, 0x14), M2C_FIELD(temp_lr, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
}
