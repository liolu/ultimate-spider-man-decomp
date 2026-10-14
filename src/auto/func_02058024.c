/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202f790(M2C_UNK, M2C_UNK);
void func_0202f8a8(M2C_UNK, M2C_UNK);

void func_02058024(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x6F4);
    if (temp_r1 != 0) {
        func_0202f790(arg0, temp_r1);
    }
    M2C_FIELD(arg0, s32 *, 0x6F4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x700) = arg2;
    temp_r1_2                     = M2C_FIELD(arg0, s32 *, 0x6F4);
    if (temp_r1_2 == 0) {
        return;
    }
    func_0202f8a8(arg0, temp_r1_2);
}
