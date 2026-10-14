#include "m2c.h"

M2C_UNK func_02091a44(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02151b34;

void func_020919d4(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02091a44(&data_02151b34);
}
