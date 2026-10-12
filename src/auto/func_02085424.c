/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02084a1c(void *);                      /* extern */
M2C_UNK func_02084f90(void *);                      /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
M2C_UNK func_0209c814(s32);                         /* extern */

void func_02085424(void *arg0) {
    s32 var_r5;
    void *var_r4;

    var_r4 = arg0;
    var_r5 = 0;
    do {
        func_0209c814(M2C_FIELD(var_r4, s32 *, 0xC));
        var_r5 += 1;
        var_r4 += 0x1C;
    } while (var_r5 < 0xC);
    func_02084f90(arg0);
    func_02084a1c(arg0);
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x8260));
}
