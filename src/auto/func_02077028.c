#include "m2c.h"

M2C_UNK func_0207707c();                            /* extern */

void func_02077028(void *arg0, s32 arg1) {
    s32 *temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 **, 8);
    if (temp_r2 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) *temp_r2;
    }
    func_0207707c(arg0, arg1);
}
