/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020705a8(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02092adc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02092b18(M2C_UNK, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02092b54(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_02092bac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02070710(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4, u16 arg5) {
    func_02092b18(arg0, arg5, 0, 1);
    func_02092adc(arg0, 0, 0, 0);
    func_02092b54(arg0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_02092bac(arg0, 0, 3, 1, 0, arg1, 0);
    func_020705a8(arg0, arg3, arg4);
    func_02092bac(arg0, 0, 3, 2, arg2, arg1, 0);
    func_020705a8(arg0, arg3, arg4);
}
