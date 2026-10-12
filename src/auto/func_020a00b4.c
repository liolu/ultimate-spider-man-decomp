/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020a00b4(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        return;
    }
    do {
        M2C_FIELD(var_r4, M2C_UNK (**)(s32), 0)(M2C_FIELD(var_r4, s32 *, 4));
        var_r4 = M2C_FIELD(var_r4, void **, 8);
    } while (var_r4 != NULL);
}
