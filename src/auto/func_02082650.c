/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02065668(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_0211c740;
extern M2C_UNK data_0211c74c;

void func_02082650(void *arg0) {
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02065668(arg0 + 0xA, &data_0211c740);
    M2C_FIELD(arg0, s16 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_02065668(arg0 + 0x22, &data_0211c74c);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}
