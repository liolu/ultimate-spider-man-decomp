#include "m2c.h"

M2C_UNK func_02091a44(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02151b3a;

void func_0209195c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02091a44(&data_02151b3a);
}
