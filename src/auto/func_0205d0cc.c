/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205cc84(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_02146178;
extern void **data_0214617c;

s32 func_0205d0cc(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r1;
    void *temp_r3;
    void *var_r1;

    data_02146178 = arg2;
    temp_r3 = *data_0214617c;
    temp_r1 = M2C_FIELD(temp_r3, s32 *, 4);
    if (temp_r1 != 0) {
        var_r1 = temp_r3 + temp_r1;
    } else {
        var_r1 = NULL;
    }
    func_0205cc84(arg0, var_r1, arg1);
    return data_02146178 - arg2;
}
