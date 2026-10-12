/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202718c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02036994(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020369e8(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK data_0214868c;

void func_02035604(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(&data_0214868c, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(&data_0214868c, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(&data_0214868c, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x198) = arg1;
    M2C_FIELD(arg0, s32 *, 0x194) = 0x18;
    temp_r0 = func_0202718c(arg0 + 0x190, 0x11);
    func_020369e8(arg0, temp_r0, 0);
    func_02036994(arg0, temp_r0, 0);
}
