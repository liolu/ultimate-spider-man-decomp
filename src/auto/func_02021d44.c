/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02021bb8();                                /* extern */
M2C_UNK func_02024ca4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern s32 data_0213d34c;

void func_02021d44(void) {
    s32 var_r0;

    func_02024ca4(3, 0x2800, 0);
    var_r0 = func_02064fc8(0x2C);
    if (var_r0 != 0) {
        var_r0 = func_02021bb8();
    }
    data_0213d34c = var_r0;
}
