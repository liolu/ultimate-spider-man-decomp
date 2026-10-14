#include "m2c.h"

void func_0208ff90(void *arg0, void *arg1) {
    void **temp_r2;
    void *temp_r3;
    void *var_r1;
    void *var_r2;

    var_r1  = arg1;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    temp_r2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void ***, 4) = temp_r2;
    }
    if (temp_r2 != NULL) {
        *temp_r2 = temp_r3;
    }
    var_r2 = M2C_FIELD(var_r1, void **, 4);
    if (var_r2 != NULL) {
        do {
            var_r1 = var_r2;
            var_r2 = M2C_FIELD(var_r2, void **, 4);
        } while (var_r2 != NULL);
    }
    M2C_FIELD(var_r1, void **, 4) = arg0;
    M2C_FIELD(arg0, void **, 0)   = var_r1;
    M2C_FIELD(arg0, void ***, 4)  = NULL;
}
