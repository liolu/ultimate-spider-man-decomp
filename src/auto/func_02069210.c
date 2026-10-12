#include "m2c.h"

M2C_UNK func_02054b18(s32, s32, M2C_UNK);           /* extern */
extern s32 data_0211abd4;

void func_02069210(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 5;
    func_02054b18(M2C_FIELD(arg0, s32 *, 0x20), data_0211abd4, 0);
}
