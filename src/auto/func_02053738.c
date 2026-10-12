/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024c20(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02055758(void *, s32, s32);            /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_02116af8;

void *func_02053738(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = func_02064fc8(0x40);
    var_r1 = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_02024c20(temp_r0, arg2, arg3);
    }
    func_02055758(arg0, var_r1, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02116af8;
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return arg0;
}
