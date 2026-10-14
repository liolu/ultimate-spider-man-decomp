/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02062fc0(void *, M2C_UNK, M2C_UNK, u8, s32, s32); /* extern */
extern M2C_UNK data_02104d08;

void *func_0204838c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6) {
    func_02062fc0(arg0, arg1, arg2, arg4, (s32) arg5, (s32) arg6);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104d08;
    M2C_FIELD(arg0, s32 *, 0x178)  = arg3;
    return arg0;
}
