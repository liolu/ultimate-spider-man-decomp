/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0204fe54(M2C_UNK);
void func_0204ffe4(M2C_UNK, M2C_UNK);

extern s32 data_0214604c;
extern s32 data_02146050;

void func_0205022c(s32 arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x14);
    if (temp_r1 != 0) {
        func_0204ffe4(M2C_FIELD(arg0, s32 *, 0xC), (s32) temp_r1);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_02146050;
        func_0204fe54(M2C_FIELD(arg0, s32 *, 0x10));
        return;
    }
    func_0204ffe4(M2C_FIELD(arg0, s32 *, 0xC), (s32) temp_r1);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_0214604c;
    func_0204fe54(M2C_FIELD(arg0, s32 *, 0x10));
}
