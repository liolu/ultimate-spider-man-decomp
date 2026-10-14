/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020707e0(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02150c08;

void func_02083d50(void) {
    M2C_FIELD(&data_02150c08, s32 *, 0)   = 0;
    M2C_FIELD(&data_02150c08, s32 *, 4)   = func_020707e0(0xA, 1, 0x800, 0x555, 0x400, 8, 0x1C80);
    M2C_FIELD(&data_02150c08, s32 *, 8)   = func_020707e0(0xA, 1, 0x1800, 0x333, 0x400, 8, 0x1C80);
    M2C_FIELD(&data_02150c08, s32 *, 0xC) = func_020707e0(0xA, 1, 0x1800, 0x555, 0x400, 0xC, 0x1C80);
}
