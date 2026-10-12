/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f5a0(M2C_UNK **, M2C_UNK);         /* extern */
M2C_UNK func_0207b8a0(M2C_UNK **, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0211bee4;

M2C_UNK **func_0207b9d0(M2C_UNK **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4) {
    func_0202f5a0(arg0, 1);
    *arg0 = &data_0211bee4;
    func_0207b8a0(arg0, arg1, arg2, arg3, (s32) arg4);
    return arg0;
}
