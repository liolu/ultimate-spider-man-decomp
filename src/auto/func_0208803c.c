/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02099148(M2C_UNK *, s32, u16, s32, s32, s32); /* extern */
extern M2C_UNK func_0208808c;

void func_0208803c(void *arg0, s32 arg1) {
    s32 var_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x5F0);
    var_r2  = 0;
    if (arg1 == 1) {
        var_r2 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = func_02099148(&func_0208808c, M2C_FIELD(temp_r3, s32 *, 0), M2C_FIELD(temp_r3, u16 *, 4),
                                                 M2C_FIELD(temp_r3, s32 *, 8), (s32) M2C_FIELD(temp_r3, u16 *, 0xC), var_r2);
}
