/* compiler: 2.0/sp1p5 -proc arm7tdmi */
#include "m2c.h"

M2C_UNK func_0209ab00(s32);                         /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */

void func_020595e4(void *arg0) {
    void *temp_r4;
    void *var_r5;

    var_r5 = M2C_FIELD(arg0, void **, 4);
    if (var_r5 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r5, void **, 0);
            func_0209ab00(M2C_FIELD(var_r5, s32 *, 8));
            func_0209ab0c(var_r5);
            var_r5 = temp_r4;
        } while (temp_r4 != NULL);
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
}
