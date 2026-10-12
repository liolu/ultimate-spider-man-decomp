#include "m2c.h"

s32 func_0206570c(u8 *arg0) {
    u8 *var_r2;

    var_r2 = arg0;
    if (*arg0 != 0) {
        do {
            var_r2 += 1;
        } while (*var_r2 != 0);
    }
    return var_r2 - arg0;
}
