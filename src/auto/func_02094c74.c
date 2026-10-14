#include "m2c.h"

void func_02094c74(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x80);
    if (temp_r3 == NULL) {
        M2C_FIELD(arg0, void **, 0x7C) = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), void **, 0x10) = arg1;
    }
    M2C_FIELD(arg1, void **, 0xC)  = temp_r3;
    M2C_FIELD(arg1, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, void **, 0x80) = arg1;
}
