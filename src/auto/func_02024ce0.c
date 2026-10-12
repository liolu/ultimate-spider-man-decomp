/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024d44(s32 *, s32, s32);             /* extern */
M2C_UNK func_02024d50(s32, u32);                    /* extern */
extern M2C_UNK data_0213d3f4;
extern M2C_UNK data_0213d408;

void func_02024ce0(s32 arg0, s32 arg1, u32 arg2) {
    s32 sp0;

    sp0 = 0;
    func_02024d44(&sp0, arg1, (0x1FFFFF & (arg2 >> 2)) | 0x05000000);
    *((M2C_UNK *)((s8 *)&data_0213d408 + (arg0 * 4))) = arg1;
    func_02024d50(*((M2C_UNK *)((s8 *)&data_0213d408 + (arg0 * 4))), arg2);
    *((M2C_UNK *)((s8 *)&data_0213d3f4 + (arg0 * 4))) = arg2;
}
