#include "m2c.h"

void func_02065d28(void *arg0, void *arg1) {
    void *var_r0;
    void *var_r2;

    var_r2 = M2C_FIELD(arg0, void **, 0xC);
    if (var_r2 != NULL) {
        var_r0 = M2C_FIELD(var_r2, void **, 0x14);
        if (var_r0 != NULL) {
            do {
                var_r2 = var_r0;
                var_r0 = M2C_FIELD(var_r0, void **, 0x14);
            } while (var_r0 != NULL);
        }
        M2C_FIELD(var_r2, void **, 0x14) = arg1;
        return;
    }
    M2C_FIELD(arg0, void **, 0xC) = arg1;
}
