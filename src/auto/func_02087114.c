#include "m2c.h"

M2C_UNK func_0202f5f0(void *);                      /* extern */

void func_02087114(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0x13) {
        M2C_FIELD(arg0, s32 *, 8)     = arg1;
        M2C_FIELD(arg0, void **, 0xC) = arg0;
    }
    func_0202f5f0(arg0 + 4);
}
