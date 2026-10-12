#include "m2c.h"

M2C_UNK func_02000ea8(M2C_UNK, s32, s32, s32);      /* extern */

void func_02000e8c(M2C_UNK arg0, void *arg1) {
    func_02000ea8(arg0, M2C_FIELD(arg1, volatile s32 *, 0), M2C_FIELD(arg1, volatile s32 *, 4), M2C_FIELD(arg1, volatile s32 *, 8));
}
