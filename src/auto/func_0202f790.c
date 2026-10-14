/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209ab0c(M2C_UNK);

extern void *data_0213e220;

void func_0202f790(s32 arg0, s32 arg1) {
    void **var_r4;
    void *var_r0;

    var_r4 = &data_0213e220;
    var_r0 = data_0213e220;
    if (var_r0 == NULL) {
        return;
    }
    do {
        if ((M2C_FIELD(var_r0, s32 *, 0) == arg0) && (M2C_FIELD(var_r0, s32 *, 4) == arg1)) {
            *var_r4 = M2C_FIELD(var_r0, void **, 8);
            func_0209ab0c((s32) var_r0);
        } else {
            var_r4 = var_r0 + 8;
        }
        var_r0 = *var_r4;
    } while (var_r0 != NULL);
}
