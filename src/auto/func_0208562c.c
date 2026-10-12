#include "m2c.h"

u16 func_0208562c(void *arg0, void *arg1) {
    u16 var_r2;

    var_r2 = M2C_FIELD(arg1, u16 *, 6);
    if (var_r2 == 0xFFFF) {
        var_r2 = *M2C_FIELD(arg0, s32 **, 0xD4) - 1;
    }
    return var_r2;
}
