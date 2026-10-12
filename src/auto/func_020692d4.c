#include "m2c.h"

M2C_UNK func_02054b18(s32, s32, M2C_UNK);           /* extern */
extern s32 data_0211abdc;

void func_020692d4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    func_02054b18(M2C_FIELD(arg0, s32 *, 0x20), data_0211abdc, 0);
}
