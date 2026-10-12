/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202e26c();                            /* extern */
M2C_UNK func_0202f5f0(M2C_UNK *);                   /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
s32 func_0207d148(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0208580c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020b5300;
extern M2C_UNK data_02101760;

void *func_0202e540(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    func_0202e26c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101760;
    func_0208580c(arg1, arg2, 0, 0);
    var_r0 = func_02064fc8(0xC);
    if (var_r0 != 0) {
        var_r0 = func_0207d148(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    func_0202f5f0(&data_020b5300);
    return arg0;
}
