#include "engine.h"
#include "m2c.h"

void func_02054b18(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0211abe0;

void func_020692b0(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_02054b18(M2C_FIELD(arg0, s32 *, 0x20), data_0211abe0, 0);
}
