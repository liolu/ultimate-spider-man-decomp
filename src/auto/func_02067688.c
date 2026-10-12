/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02067264(void *, s32, s32, s32);       /* extern */
M2C_UNK func_02069a0c();                            /* extern */
extern M2C_UNK data_02119ee4;

void *func_02067688(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 var_r4;

    func_02069a0c();
    var_r4 = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02119ee4;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 2;
    M2C_FIELD(arg0, s32 *, 0x78) = 0xB4;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x80) = arg5;
    M2C_FIELD(arg0, s32 *, 0x84) = arg6;
    M2C_FIELD(arg0, s32 *, 0x88) = arg7;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg8;
    M2C_FIELD(arg0, s32 *, 0x90) = arg9;
    do {
        func_02067264(arg0, var_r4, M2C_FIELD(arg0, s32 *, 0x90), 0);
        var_r4 += 1;
    } while (var_r4 < 9);
    return arg0;
}
