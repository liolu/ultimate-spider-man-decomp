/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02096244();                            /* extern */
s32 func_02096428(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02096450(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02155f10;
extern M2C_UNK data_02155f14;
extern M2C_UNK func_0209fd94;

void func_0209fd04(void) {
    if (data_02155f10 != 0) {
        return;
    }
    data_02155f10 = 1;
    func_02096244();
    M2C_FIELD(&data_02155f14, s16 *, 0x32) = 0;
    M2C_FIELD(&data_02155f14, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02155f14, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_02155f14, s32 *, 0)    = 0;
    M2C_FIELD(&data_02155f14, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02155f14, s16 *, 0x30) = 0;
    M2C_FIELD(&data_02155f14, s16 *, 0x34) = 0;
    do {

    } while (func_02096428(6, 1) == 0);
    func_02096450(6, &func_0209fd94);
}
