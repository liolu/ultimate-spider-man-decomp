/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ffe78c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02027400(M2C_UNK);

void func_02027554(s32 arg0) {
    s32 temp_r2;

    func_02027400(arg0);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (M2C_FIELD(arg0, s32 *, 0x38) == temp_r2) {
        return;
    }
    func_01ffe78c(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x18), temp_r2);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
}
