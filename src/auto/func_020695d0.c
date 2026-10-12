/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204ad48(s32);                             /* extern */
M2C_UNK func_0204eab0(s32, s32);                    /* extern */
s32 func_0204eb30();                                /* extern */
M2C_UNK func_02069550(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207c284(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0214876c;

void func_020695d0(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    func_0207c284(&data_0214876c, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x30), 0, 0, 0);
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC);
    if (temp_r5 != -1) {
        temp_r4 = func_0204eb30();
        func_0204eab0(temp_r4, func_0204ad48(temp_r5));
    }
    func_02069550(arg0, 0x10, 0x45, M2C_FIELD(arg0, s32 *, 8));
    func_02069550(arg0, 0, 0x12, M2C_FIELD(arg0, s32 *, 8));
    func_02069550(arg0, 0x27, 1, 0x64);
}
