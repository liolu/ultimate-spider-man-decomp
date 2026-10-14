/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024c20(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020556d8(s32, s32, M2C_UNK);               /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02119ebc;

void *func_02067078(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02119ebc;
    M2C_FIELD(arg0, s32 *, 4)      = arg5;
    M2C_FIELD(arg0, s32 *, 8)      = arg6;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg4;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    var_r5                         = func_02064fc8(0x28);
    if (var_r5 != 0) {
        temp_r0 = func_02064fc8(0x40);
        var_r1  = temp_r0;
        if (var_r1 != 0) {
            var_r1 = func_02024c20(temp_r0, arg1, arg2);
        }
        var_r5 = func_020556d8(var_r5, var_r1, arg3);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r5;
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 4) > 0x2D) {
        M2C_FIELD(arg0, s32 *, 4) = 0x2D;
    }
    return arg0;
}
