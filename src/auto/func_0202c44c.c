/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d6e8(M2C_UNK, M2C_UNK *, s32);         /* extern */
M2C_UNK func_0202dc34();                            /* extern */
s32 func_0206570c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0210153c;
extern M2C_UNK data_02101548;
extern M2C_UNK data_02101558;

void func_0202c44c(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r4;
    s32 var_r5;

    if (arg0 == func_0200d6e8(0, &data_0210153c, func_0206570c(&data_0210153c))) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_0200d6e8(0, &data_02101548, func_0206570c(&data_02101548));
    func_0200d6e8(0, &data_02101558, func_0206570c(&data_02101558));
    func_0200d6e8(0, &data_0210153c, func_0206570c(&data_0210153c));
    if (arg1 == func_0200d6e8(0, &data_02101548, func_0206570c(&data_02101548))) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (arg1 == func_0200d6e8(0, &data_02101558, func_0206570c(&data_02101558))) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r4 == 0) {
        return;
    }
    if ((var_r5 == 0) && (var_r0 == 0)) {
        return;
    }
    func_0202dc34();
}
