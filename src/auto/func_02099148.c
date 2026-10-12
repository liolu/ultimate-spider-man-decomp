/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e84(M2C_UNK *, u32);              /* extern */
M2C_UNK func_02095f34(s32, M2C_UNK *, u32);         /* extern */
s32 func_02097170(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020972a0(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32); /* extern */
M2C_UNK func_020973f4(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_02152a40;

s32 func_02099148(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02097170(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    func_02095f34(arg1, &data_02152a40, arg2);
    func_02094e84(&data_02152a40, arg2);
    func_020973f4(0x18, arg0);
    var_r0 = func_020972a0(0x18, 5, &data_02152a40, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
