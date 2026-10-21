/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void **func_02024c20(void **, M2C_UNK, M2C_UNK);    /* extern */
void **func_02064fc8(M2C_UNK);                      /* extern */
void **func_0206fb3c(void **, void **, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_020470b8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;
    void **temp_r0_2;
    void **var_r1;
    void **var_r4;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x17C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    var_r4 = func_02064fc8(0xC8);
    if (var_r4 != NULL) {
        temp_r0_2 = func_02064fc8(0x40);
        var_r1    = temp_r0_2;
        if (var_r1 != NULL) {
            var_r1 = func_02024c20(temp_r0_2, arg1, 0);
        }
        var_r4 = func_0206fb3c(var_r4, var_r1, arg2, 1, 0, 0);
    }
    M2C_FIELD(arg0, void ***, 0x17C) = var_r4;
}
