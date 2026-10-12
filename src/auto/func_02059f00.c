#include "m2c.h"

M2C_UNK func_02033bf8();                            /* extern */

void func_02059f00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    func_02033bf8();
}
