/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205d16c(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
extern s32 data_02146178;
extern void **data_0214617c;

s32 func_0205d288(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r2;
    void *temp_ip;
    void *var_r2;

    data_02146178 = arg3;
    temp_ip       = *data_0214617c;
    temp_r2       = M2C_FIELD(temp_ip, s32 *, 4);
    if (temp_r2 != 0) {
        var_r2 = temp_ip + temp_r2;
    } else {
        var_r2 = NULL;
    }
    func_0205d16c(arg0, arg1, var_r2, arg2);
    return data_02146178 - arg3;
}
