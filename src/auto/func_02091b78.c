#include "m2c.h"

M2C_UNK func_02091b9c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02151b34;

void func_02091b78(void) {
    *(s32 *)0x04000000 &= ~0x80000000;
    func_02091b9c(&data_02151b34);
}
