/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fc8(M2C_UNK);                         /* extern */
s32 func_0206882c(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
extern M2C_UNK data_020d6634;
extern M2C_UNK data_02150f74;

void func_02067f68(void *arg0) {
    s32 var_r0;
    void *temp_ip;

    var_r0 = func_02064fc8(0x14);
    if (var_r0 != 0) {
        temp_ip = M2C_FIELD(arg0, void **, 4);
        var_r0 = func_0206882c(var_r0, &data_02150f74, 1, &data_020d6634, M2C_FIELD(temp_ip, s32 *, 4), M2C_FIELD(temp_ip, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
}
