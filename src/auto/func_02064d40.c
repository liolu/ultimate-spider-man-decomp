#include "m2c.h"

M2C_UNK func_02064d58();                            /* extern */

void func_02064d40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 >> M2C_FIELD(arg0, s32 *, 4));
    func_02064d58();
}
