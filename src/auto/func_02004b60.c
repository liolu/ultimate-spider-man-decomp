/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02004b60(void *arg0) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    if (M2C_FIELD(temp_r3, s32 *, 0x10) != M2C_FIELD(temp_r3, s32 *, 0x18)) {
        return;
    }
    if (M2C_FIELD(temp_r3, s32 *, 0x28) != M2C_FIELD(temp_r3, s32 *, 0x30)) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0xBC);
    if ((M2C_FIELD(temp_r2, u8 *, 0x97) == 0) && (M2C_FIELD(temp_r2, u8 *, 0x96) == 0)) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x108)(arg0);
}
