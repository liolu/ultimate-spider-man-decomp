#include "m2c.h"

M2C_UNK func_02014af0();                            /* extern */

void func_02014b00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    func_02014af0();
}
