#include "m2c.h"
#include "engine.h"

s32 func_02065c7c(s32 arg0) {
    s32 var_r0;
    void *var_r1;

    var_r1 = M2C_FIELD(arg0, void **, 0xC);
    var_r0 = 0;
    if (var_r1 == NULL) {
        return 0;
    }
    do {
        var_r1 = M2C_FIELD(var_r1, void **, 0x14);
        var_r0 += 1;
    } while (var_r1 != NULL);
    return var_r0;
}
