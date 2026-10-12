/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bf90(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_02154ff4;
extern M2C_UNK data_02154ff8;
extern M2C_UNK func_0209cc5c;
extern M2C_UNK func_0209ccd4;

void func_0209d24c(void *arg0) {
    if (data_02154ff4 == 0) {
        func_0209bf90(&data_02154ff8, 0);
        data_02154ff4 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = &func_0209ccd4;
    M2C_FIELD(arg0, void **, 0xC) = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_0209cc5c;
    M2C_FIELD(arg0, void **, 0x18) = arg0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
