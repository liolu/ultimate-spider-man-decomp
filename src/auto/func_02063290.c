/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020632d0(void *);                      /* extern */

void func_02063290(void *arg0) {
    s32 var_r5;
    void *var_r4;

    M2C_FIELD(arg0, s32 *, 0) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 4) = 0x7FFFFFFF;
    var_r4                    = arg0 + 8;
    var_r5                    = 0;
    do {
        func_020632d0(var_r4);
        var_r5 += 1;
        var_r4 += 0x128;
    } while (var_r5 < 2);
}
