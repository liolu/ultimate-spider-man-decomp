/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02008d98(M2C_UNK, M2C_UNK);

void func_02009184(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x178) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x188) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x18C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    if (arg2 == 0) {
        return;
    }
    func_02008d98(arg0, 0);
}
