/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d6e8(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_0206570c(M2C_UNK);                         /* extern */

s32 func_020841d8(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r2;
    void *temp_r1;
    void *var_r5;

    var_r5  = arg0;
    temp_r0 = func_0200d6e8(0, arg1, func_0206570c(arg1));
    var_r2  = 0;
loop_1:
    temp_r1 = M2C_FIELD(var_r5, void **, 0x1C);
    if ((temp_r1 != NULL) && (temp_r0 == M2C_FIELD(temp_r1, u16 *, 0xC))) {
        return var_r2;
    }
    var_r2 += 1;
    var_r5 += 0x1C;
    if (var_r2 >= 0xC) {
        return -1;
    }
    goto loop_1;
}
