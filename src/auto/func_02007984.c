/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e4c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02000e5c(s32, M2C_UNK);                /* extern */
s32 func_02007968();                                /* extern */
extern s32 data_020eccd8;
extern s32 data_020ecce0;

void func_02007984(void *arg0) {
    s32 temp_r1;

    if (func_02007968() == 0) {
        return;
    }
    temp_r1 = data_020eccd8 - data_020ecce0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) <= temp_r1) {
        return;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F4), s32 *, 0x50) <= temp_r1) {
        return;
    }
    func_02000e5c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, 0);
    func_02000e4c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, 0);
}
